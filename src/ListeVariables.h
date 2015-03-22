#ifndef LISTEVARIABLES_H
#define LISTEVARIABLES_H
#include "Symbole.h"

class ListeVariables : public Symbole
{
public:
    ListeVariables(): Symbole(LV){}
    ~ListeVariables();

};

#endif // LISTEVARIABLES_H
