#ifndef LISTECONSTANTES_H
#define LISTECONSTANTES_H
#include "Symbole.h"
#include "Identifiant.h"
#include <vector>

using namespace std;

class ListeConstantes : public Symbole
{
public:
    ListeConstantes(Identifiant *id);
    ~ListeConstantes();
    void ajouterConstante(Identifiant *id);
    vector<Identifiant *> getListID();
    void afficher(); // Display the value for the representation
protected:
    vector<Identifiant *> listeConstantes;

};

#endif // LISTECONSTANTES_H


