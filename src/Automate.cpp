#include "Automate.h"
using namespace std;


Automate::Automate()
{
	//ctor
	
}


bool Automate::reduction(int nbEtat, Symbole *s){

    for(int i = 1; i<nbEtat; i++){
        etats.pop();
    }
    //etats.top()->transition(this, s);
    return true;

}

bool Automate::decalage(Symbole *s, Etat *etat){

    etats.push(etat);
    symboles.push(s);
    return true;
}


bool Automate::analyse(){
    return true;
}

 AnalyseurLexical * Automate::getAnalyseurLexical()
 {
	return aLexical;
 }

Automate::~Automate()
{
	//dtor
}
