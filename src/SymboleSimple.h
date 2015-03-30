#ifndef SYMBOLESIMPLE_H
#define SYMBOLESIMPLE_H

#include "Symbole.h"

class SymboleSimple : public Symbole
{
    public:
        SymboleSimple(Symboles);
	    virtual ~SymboleSimple();
        void afficher(); // Display the value for the representation
    protected:
    private:
};

#endif // SYMBOLESIMPLE_H
