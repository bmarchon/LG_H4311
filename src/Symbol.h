#ifndef SYMBOL_H
#define SYMBOL_H

#include <string>
#include <iostream>

using namespace std;

typedef enum {P, D, I,EXPR,LV, LC,F, T,A,M, VAR, CONST,VAL, ECRIRE, LIRE, ID, END, PF, PLUS, MOINS, FOIS, DIVISE, PV, PO, EG, V, AFFECT} Symbols;

static const string types[] = {
        "P", "D", "I", "EXPR","LV","LC","F", "T","A","M", "VAR", "CONST","VAL", "ECRIRE", "LIRE", "ID", "END", "PF", "PLUS", "MOINS", "FOIS", "DIVISE", "PV", "PO", "EG", "V", "AFFECT"
};

class Symbol
{
    public:
        Symbol(Symbols type);
        virtual ~Symbol() {}
        Symbols getType();
        void setType(Symbols t);
        virtual void print() = 0; // Display the value for the representation
        void printType();
    private:
        Symbols type;
};

#endif // SYMBOL_H
