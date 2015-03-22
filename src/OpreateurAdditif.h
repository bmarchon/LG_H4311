#ifndef OPREATEURADDITIF_H
#define OPREATEURADDITIF_H

#include "Symbole.h"
class OpreateurAdditif : public Symbole
{
public:

    OpreateurAdditif(Symboles operateur): Symbole(operateur){}
    ~OpreateurAdditif();

};

#endif // OPREATEURADDITIF_H
