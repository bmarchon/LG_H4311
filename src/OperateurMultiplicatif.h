#ifndef OPERATEURMULTIPLICATIF_H
#define OPERATEURMULTIPLICATIF_H
#include "Symbole.h"

class OperateurMultiplicatif : public Symbole
{
public:
    OperateurMultiplicatif(Symboles type) : Symbole(type){}
    ~OperateurMultiplicatif();
};

#endif // OPERATEURMULTIPLICATIF_H
