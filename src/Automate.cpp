#include "Automate.h"

using namespace std;

static const int MAX = 200;
/*
Automate::Automate()
{
    //ctor
    struct analyseSymbole test(new SymboleSimple(VAR));
    tableauAnalyseStatique.push_back(test);
}*/

Automate::Automate(AnalyseurLexical *aL)
{
    aLexical = aL;
}

void Automate::analyseStatique(){
    vector<Declaration*> declarations = programme.getDeclarations();
    vector<Instruction*> instructions = programme.getInstructions();

    for (auto itDeclaration = declarations.begin() ; itDeclaration != declarations.end(); ++itDeclaration)
    {
        Symbole * contenuDec = (*itDeclaration)->getContenu();
        if(contenuDec->getType() == LC)
        {
            vector<Identifiant *> constantes = ((DecConstante*)(*itDeclaration))->getConstantes();
            for (auto itConstantes = constantes.begin(); itConstantes != constantes.end(); ++itConstantes) {
                cout << "constante: " << (*itConstantes)->afficherType() << endl;
                //tableauAnalyseStatique.insert(make_pair((*itConstantes)->valeur(),(*itConstantes)));
                //tableauAnalyseStatique.back().affecte = true;
            }
        }
        else if (contenuDec->getType() == LV)
        {
            vector<Identifiant *> variables = ((DecVariable*)(*itDeclaration))->getVariables();
            for (auto itVariables = variables.begin(); itVariables != variables.end(); ++itVariables) {
                cout << "variable: " << (*itVariables)->afficherType() << endl;
                // variables cannot be directly initalized;
                //tableauAnalyseStatique.push_back(*itVariables);
            }
        }
        // should never be the case when no fault in grammar
        else
        {
            cout << "Something went wrong, declaration was a :" <<  (*itDeclaration)->getContenu()->afficherType() << endl;
        }
        
        for (auto it = tableauAnalyseStatique.begin(); it != tableauAnalyseStatique.end(); it++) {
            //cout << it->first << " => " << it->second.s->afficher() << '\n';
        }
    }

    for (auto it = instructions.begin() ; it != instructions.end(); ++it)
    {
        /*
        switch((*it)->getType())
        {
            case AFF:
                InstructionAffectation * instrAff = (InstructionAffectation) *it;
                
                break;
            case LEC:
                InstructionLecture * instrLec = (InstructionLecture) *it;
                break;
            case ECR:
                InstructionEcriture * instrEcr = (InstructionEcriture) *it;
                break;
        }
        */
    }

} 

Programme Automate::getProgramme() {
    return this->programme;
}



bool Automate::reduction(int nbEtat, Symbole *s)
{
    for (int i = 0; i < nbEtat ; i++){
        etats.pop();
    }
    //symboles.push(s);
    etats.top()->transition(*this, s);
    //cout << "reduction" << endl;
    //etats.top()->print();
    return false;

}

bool Automate::decalage(Symbole *s, Etat *etat){

    etats.push(etat);
    symboles.push(s);

    return false;
}


bool Automate::analyse(){

    etats.push(new Etat0);
    
    int i =0;
    Symbole * next;
    bool transition;
    do{ 
        etats.top()->print();
        
        next = aLexical->next();
        
        cout << next->afficherType() << endl;

        //if the next symbol is an id, we have to make sure it has not been created before
        if(next->getType() == ID)
        {
            Identifiant * id  = (Identifiant*) next;
            if(identifiants.find(id->valeur()) != identifiants.end())
            {
                //use existing id if it exists
                next = identifiants[id->valeur()];
                //reset id role (could have been used as T or F before)
                next->setType(ID);
            }else{
                //insert new id
                identifiants.insert(make_pair(id->valeur(),id));
            }
        }
     }while((!etats.top()->transition(*this, next)) && (i++) < MAX);

    if(i >= MAX)
    {
        cout << "program contains errors" << endl;
        return false;
    }else{
        return true;
    }
    
}

/* old version
bool Automate::analyse(){
    etats.push(new Etat0);
    //cout <<  aLexical->next()->getType() << endl;
    
    
    //while(aLexical->next()->getType() != END)
    //{

     //etats.top()->print();
     int i =0;
     while(!etats.top()->transition(*this, aLexical->next()) && (i++) < MAX)
     {
          //etats.top()->print();
     }

     if(i >= MAX)
    {
        return false;
    }

    return true;
}*/


AnalyseurLexical * Automate::getAnalyseurLexical()
{
    return aLexical;
}

Symbole *Automate::getDernierSymbole()
{
    Symbole *s = symboles.top();
    symboles.pop();
    return s;

}

void Automate::pushEtat(Etat *etat)
{
    etats.push(etat);
}

void Automate::consommer()
{
    aLexical->shift();
}
void Automate::popSymbole()
{
    symboles.pop();
}

Automate::~Automate()
{
    //dtor
}

void Automate::ajouter(Instruction* instr)
{
    programme.ajouter(instr);
}

void Automate::ajouter(Declaration* dec)
{
    programme.ajouter(dec);
}


void Automate::executer()
{
    programme.executer();
}
