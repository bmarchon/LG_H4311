#ifndef EXPRPAR_H
#define EXPRPAR_H
#include "Expression.h"

class ExprPar : public Expression
{
	public:
        ExprPar(): Expression(EXPR){}
		virtual ~ExprPar();
		double eval();
	protected:
	private:
};

#endif // EXPRPAR_H
