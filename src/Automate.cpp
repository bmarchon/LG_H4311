#include "Automate.h"


Automate::Automate()
{
	//ctor
}


bool Automate::reduction(int nbEtat, Symbole *s){

    for(int i = 1; i<nbEtat; i++){
        etats.pop();
    }
    etats.top().transition(this, s);


}

bool Automate::decalage(Symbole *s, Etat *etat){

    etats.push(etat);
    symboles.push(s);

}


bool Automate::analyse(){

}


Automate::~Automate()
{
	//dtor
}
