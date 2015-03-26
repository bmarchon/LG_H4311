#ifndef OPREATEURADDITIF_H
#define OPREATEURADDITIF_H

#include "Symbole.h"
#include <iostream>

#include <sstream>
#include <string>

using namespace std;

class OperateurAdditif : public Symbole
{
public:

    OperateurAdditif(char op): Symbole(A), operateur(op){}
    ~OperateurAdditif();
    char getChar();
    void afficher(); // Display the value for the representation
private:
    char operateur;
};

#endif // OPREATEURADDITIF_H
