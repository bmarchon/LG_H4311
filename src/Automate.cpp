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
        switch((*itDeclaration)->getContenu())
        {
            case LC:
                vector<Identifiant *> constantes = ((DecConstante*)(*itDeclaration))->getConstantes();
                for (auto itConstantes = constantes.begin(); itConstantes != constantes.end(); ++itConstantes) {
                    cout << "constante: " << (*itConstantes)->afficherType() << endl;
                    if (tableauAnalyseStatique.find((*itConstantes)->valeur()) != tableauAnalyseStatique.end()) {
                        cout << "ERROR: The Constant " << (*itConstantes)->valeur() << " has already been declared" << endl;
                    } else {
                        tableauAnalyseStatique.insert(make_pair((*itConstantes)->valeur(),(*itConstantes)));
                        tableauAnalyseStatique.at((*itConstantes)->valeur()).affecte = true;
                    }
                }
                break;
            case LV:
                vector<Identifiant *> variables = ((DecVariable*)(*itDeclaration))->getVariables();
                for (auto itVariables = variables.begin(); itVariables != variables.end(); ++itVariables) {
                    cout << "variable: " << (*itVariables)->afficherType() << endl;
                    if (tableauAnalyseStatique.find((*itVariables)->valeur()) != tableauAnalyseStatique.end()) {
                        cout << "ERROR: The Variable " << (*itVariables)->valeur() << " has already been declared" << endl;
                    } else {
                        tableauAnalyseStatique.insert(make_pair((*itVariables)->valeur(),(*itVariables)));
                    }
                    // variables cannot be directly initalized;
                }
                break;
            // should never be the case when no fault in grammar
            default:
                cout << "Something went wrong, declaration was a :" <<  (*itDeclaration)->getContenu()->afficherType() << endl;
        }
    }
/*    for (auto it = tableauAnalyseStatique.begin(); it != tableauAnalyseStatique.end(); it++) {
        cout << it->first << endl;
    }*/

    for (auto it = instructions.begin() ; it != instructions.end(); ++it)
    {
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
    bool accepte;
    do{ 
        //etats.top()->print();
        
        next = aLexical->next();
        
        //cout << next->afficherType() << endl;

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
        try
        {
            accepte = etats.top()->transition(*this, next);
        }catch(std::logic_error ex)
        {
            throw ex;
        }
     }while(!accepte);

    
}


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
