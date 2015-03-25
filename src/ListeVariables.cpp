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
