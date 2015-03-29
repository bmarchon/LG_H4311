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

vector<Identifiant *> DecConstante::getConstantes()
{
	return this->listeConstantes->getListID();
}
