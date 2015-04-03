#include "ExprPar.h"

ExprPar::ExprPar(Expression *expr, Symbols type) : Expression(PAR, type)
{
    this->expression = expr;
}

Expression * ExprPar::getExpression()
{
    return this->expression;
}

void ExprPar::setExpression(Expression *expr)
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
