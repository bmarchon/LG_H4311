#ifndef OPREATEURADDITIF_H
#define OPREATEURADDITIF_H

#include "Symbole.h"
class OperateurAdditif : public Symbole
{
public:

    OperateurAdditif(char op): Symbole(M), operateur(op){}
    ~OperateurAdditif();
protected:
    char operateur;
};

#endif // OPREATEURADDITIF_H
