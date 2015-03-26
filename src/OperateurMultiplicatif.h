#ifndef OPERATEURMULTIPLICATIF_H
#define OPERATEURMULTIPLICATIF_H
#include "Symbole.h"
#include <iostream>

#include <sstream>
#include <string>


using namespace std;

class OperateurMultiplicatif : public Symbole
{
public:
    OperateurMultiplicatif(char op) : Symbole(M), operateur(op){}
    ~OperateurMultiplicatif();
    void afficher(); // Display the value for the representation
protected:
    char operateur;
};

#endif // OPERATEURMULTIPLICATIF_H
