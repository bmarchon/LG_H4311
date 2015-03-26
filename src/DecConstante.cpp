#include "DecConstante.h"

DecConstante::DecConstante(ListeConstantes *lc):Declaration(lc)
{
    listeConstantes = lc;
}



DecConstante::~DecConstante()
{
	//dtor
}

void DecConstante::afficher() {
    //cout << "const ";
    this->listeConstantes->afficher();
    //cout << ";";
}
