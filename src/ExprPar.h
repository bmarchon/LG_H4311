#ifndef EXPRPAR_H
#define EXPRPAR_H

#include "Expression.h"
#include "Symbol.h"

#include <iostream>

using namespace std;

class ExprPar : public Expression
{
	public:
        ExprPar(Expression *expr, Symbols type);
        virtual ~ExprPar() {}
        Expression * getExpression();
        void setExpression(Expression *expr);
        double eval();
        void print(); // Display the value for the representation
	protected:
	private:
		Expression * expression;
};

#endif // EXPRPAR_H
