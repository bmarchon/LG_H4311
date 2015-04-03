#ifndef SYMBOLSIMPLE_H
#define SYMBOLSIMPLE_H

#include "Symbol.h"

class SymbolSimple : public Symbol
{
    public:
        SymbolSimple(Symbols type) : Symbol(type) {}
        virtual ~SymbolSimple() {}
        void print(); // Display the value for the representation
};
#endif // SYMBOLSIMPLE_H
