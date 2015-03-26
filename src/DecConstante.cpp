#include "DecConstante.h"

DecConstante::DecConstante(ListeConstantes *lc):Declaration(lc)
{
    declaration = lc;
}



DecConstante::~DecConstante()
{
	//dtor
}

void DecConstante::afficher() {
	//cout << "const ";
	this->declaration->afficher();
	//cout << ";";
}
