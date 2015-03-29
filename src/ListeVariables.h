#ifndef LISTEVARIABLES_H
#define LISTEVARIABLES_H
#include "Symbole.h"
#include "Identifiant.h"
#include <vector>

using namespace std;

class ListeVariables : public Symbole
{
public:
    ListeVariables(Identifiant *id);
    ~ListeVariables();
    void ajouterIdentifiant(Identifiant *id);
    void afficher(); // Display the value for the representation
    vector<Identifiant *> getListID();
protected:
    vector<Identifiant *> listeVariables;

};

#endif // LISTEVARIABLES_H
