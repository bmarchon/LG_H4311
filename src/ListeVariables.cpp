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
    for(unsigned int i=0; i<listeVariables.size(); i++) {
        cout << "var ";
        listeVariables[i]->afficher();
        cout << ";" << endl;
	}
}
