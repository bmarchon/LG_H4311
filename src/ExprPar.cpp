#include "ExprPar.h"
 ExprPar::ExprPar(Expression *expr, Symboles type): Expression(type)
 {
     expression = expr;
 }
ExprPar::~ExprPar()
{
	//dtor
}

double ExprPar::eval()
{
	return expression->eval();
}
