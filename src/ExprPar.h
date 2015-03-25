#ifndef EXPRPAR_H
#define EXPRPAR_H
#include "Expression.h"

class ExprPar : public Expression
{
	public:
        ExprPar(Expression *expr, Symboles type);
		virtual ~ExprPar();
        double eval();
	protected:
	private:
		Expression * expression;
};

#endif // EXPRPAR_H
