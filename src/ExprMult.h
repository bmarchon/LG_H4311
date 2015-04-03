#ifndef EXPRMULT_H
#define EXPRMULT_H

#include "ExprBinaire.h"
#include "Operator.h"

class ExprMult : public ExprBinaire
{
	public:
        ExprMult(Symbols type, Expression *exprLeft, Operator *opMult, Expression *exprRight) : ExprBinaire(type, exprLeft, opMult, exprRight) {}
        ExprMult(Expression *exprLeft, Operator *opMult, Expression *exprRight) : ExprBinaire(EXPR, exprLeft, opMult, exprRight) {}
        virtual ~ExprMult() {}
        double eval();
        void print(); // Display the value for the representation
};

#endif // EXPRMULT_H
