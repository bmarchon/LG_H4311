#include "ListeConstantes.h"

ListeConstantes::ListeConstantes(Identifiant *id):Symbole(LC)
{
    listeConstantes.push_back(id);
}

void ListeConstantes::ajouterConstante(Identifiant *id)
{
    listeConstantes.push_back(id);
}

ListeConstantes::~ListeConstantes()
{

}

vector<Identifiant*> ListeConstantes::identifiants()
{
	return this->listeConstantes;
}

