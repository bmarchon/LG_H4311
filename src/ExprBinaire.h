#ifndef EXPRBINAIRE_H
#define EXPRBINAIRE_H

#include "Expression.h"
#include "Operator.h"
#include "Symbol.h"

class ExprBinaire : public Expression
{
	public:
	    // TO-DO: really needed???
        ExprBinaire(Symbols type): Expression(BIN, type) {}
        ExprBinaire(Symbols type, Expression *exprLeft, Operator *op, Expression *exprRight);
        virtual ~ExprBinaire() {}
        Expression* getLeft();
        void setLeft(Expression * g);
        Expression* getRight();
        void setRight(Expression * d);
        Operator* getOperator();
        void setOperator(Operator *op);
        virtual double eval() = 0;
        virtual void print() = 0; // Display the value for the representation
	protected:
        Expression * exprLeft;
        Expression * exprRight;
        Operator *op;
};

#endif // EXPRBINAIRE_H
