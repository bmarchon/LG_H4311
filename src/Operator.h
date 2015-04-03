#ifndef OPERATOR_H
#define OPERATOR_H

#include "Symbol.h"

class Operator : public Symbol
{
    public:
        Operator(Symbols type, char op);
        virtual ~Operator() {}
        virtual void print() = 0; // Display the value for the representation
        char getChar();
        void setChar(char op);
    private:
        char op;
};

#endif // OPERATOR_H
