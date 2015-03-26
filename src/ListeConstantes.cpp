#include "ListeConstantes.h"

using namespace std;

ListeConstantes::ListeConstantes(Identifiant *id):Symbole(LC)
{
    listeConstantes.push_back(id);
}

vector<Identifiant *> ListeConstantes::getListID()
{
	return this->listeConstantes;
}

void ListeConstantes::ajouterConstante(Identifiant *id)
{
    listeConstantes.push_back(id);
}

ListeConstantes::~ListeConstantes()
{

}

void ListeConstantes::afficher() {
	for(int unsigned i=0; i<listeConstantes.size(); i++) {
		cout << "const " << listeConstantes[i]->valeur() << ";" << endl;
	}
}
