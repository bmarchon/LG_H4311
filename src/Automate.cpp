#include "Automate.h"

using namespace std;

static const int MAX = 100;
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


void Automate::testTableauanalyseeeeee(){
    cout << tableauAnalyseStatique[0].s->afficherType() << "coucou" << endl;
}

void Automate::analyseStatique(){
    vector<Declaration*> declarations = programme.getDeclarations();
    vector<Instruction*> instructions = programme.getInstructions();

    for (auto it = declarations.begin() ; it != declarations.end(); ++it)
    {
        Symbole * contenuDec = (*it)->getContenu();

        //for (auto it = listID.begin() ; it != listID.end(); ++it)
        //{
        
        /*
        if((*it)->getContenu()->getType() == LC)
        {
            tableauAnalyseStatique.back().affecte = true;
        }
        else if((*it)->getContenu()->getType() != LV)
        {
            cout << "Something went wrong, declaration was a :" <<  (*it)->getContenu()->getType() << endl;
        }
        */
        //}
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
    /*stack<Symbole *> cache = symboles;
    switch(etats.top()->getNombreEtat())
    {
        case 2:
            cache.pop();
            while(cache.top()->getType() != VAR) {
                if (cache.top()->getType() == ID)
                {
                    tableauAnalyseStatique.push_back(analyseSymbole(cache.top()));
                    cache.pop(); //is fucking void!
                }
            }
            break;
        case 3:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;

    }
    return false;
    */

    

    for(int i = 0; i<nbEtat ; i++){
        etats.pop();
    }

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
        next = aLexical->next();

        //if the next symbol is an id, we have to make sure it has not been created before
        if(aLexical->next()->getType() == ID)
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
