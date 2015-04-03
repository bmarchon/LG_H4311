#include "ExprPar.h"

ExprPar::ExprPar(Expression *expr, Symboles type) : Expression(PAR, type)
{
    this->expression = expr;
}

double ExprPar::eval()
{
	return this->expression->eval();
}

void ExprPar::print() {
    cout << "(";
	this->expression->print();
    cout << ")";
}
