#ifndef OPERATEURMULTIPLICATIF_H
#define OPERATEURMULTIPLICATIF_H
#include "Symbole.h"

class OperateurMultiplicatif : public Symbole
{
public:
    OperateurMultiplicatif(char op) : Symbole(M), operateur(op){}
    ~OperateurMultiplicatif();
    char getChar();
protected:
    char operateur;
};

#endif // OPERATEURMULTIPLICATIF_H
