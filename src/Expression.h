#ifndef EXPRESSION_H
#define EXPRESSION_H
#include "Symbol.h"

typedef enum {BIN, PAR, VALEUR, IDENT} Expressions;
static const string exprTypes[] = { "BIN", "PAR", "VALEUR", "IDENT" };

class Expression : public Symbol
{
    public:
        Expression();
        Expression(Expressions type, Symbols type);
        virtual ~Expression();
        Expression * getExpression();
        void setExpression(Expression *expression);
        virtual double eval() = 0;
        virtual void print() = 0; // Display the value for the representation
        Expressions getExpressionType();
        string printType();
    protected:
        Expressions type;
        Expression *expression;
    private:
};

#endif // EXPRESSION_H
