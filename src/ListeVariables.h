#ifndef LISTEVARIABLES_H
#define LISTEVARIABLES_H
#include "Symbole.h"
#include "Identifiant.h"
#include <vector>
class ListeVariables : public Symbole
{
public:
    ListeVariables(Identifiant *id);
    ~ListeVariables();
    void ajouterIdentifiant(Identifiant *id);
protected:
    vector<Identifiant *> listeVariables;

};

#endif // LISTEVARIABLES_H
