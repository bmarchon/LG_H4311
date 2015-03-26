#include "ListeVariables.h"

ListeVariables::ListeVariables(Identifiant *id): Symbole(LV)
{

    listeVariables.push_back(id);
}

ListeVariables::~ListeVariables()
{

}

void ListeVariables::ajouterIdentifiant(Identifiant *id)
{
    listeVariables.push_back(id);
}

void ListeVariables::afficher() {
	for(int unsigned i=0; i<listeVariables.size(); i++) {
		if (i == listeVariables.size() -1) {
			cout << listeVariables[i];
		}
		else {
			cout<<listeVariables[i] << ", ";
		}
	}
}
