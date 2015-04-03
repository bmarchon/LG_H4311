#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "Symbol.h"

#include <iostream>

typedef enum {BIN, PAR, VALEUR, IDENT} Expressions;
static const string exprTypes[] = { "BIN", "PAR", "VALEUR", "IDENT" };

class Expression : public Symbol
{
    public:
        Expression(Expressions exprType, Symbols type);
        virtual ~Expression() {}
        virtual double eval() = 0;
        virtual void print() = 0; // Display the value for the representation
        Expressions getExpressionType();
        void printExpressionType();
    protected:
        Expressions exprType;
    private:
};

#endif // EXPRESSION_H
