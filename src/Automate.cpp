#include "Automate.h"

using namespace std;
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

    for(int i = 1; i<nbEtat+1; i++){
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
    //cout <<  aLexical->next()->getType() << endl;
    
    
    //while(aLexical->next()->getType() != END)
    //{

     //etats.top()->print();
     int i =0;
     while(!etats.top()->transition(*this, aLexical->next()) && (i++) < 1000)
     {
          //etats.top()->print();
     }



    return true;
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
