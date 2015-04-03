#include "Expression.h"

Expression::Expression(Expressions exprType, Symbols type) : Symbol(type)
{
	this->exprType = exprType;
}

Expressions Expression::getExpressionType()
{
	return this->exprType;
}

void Expression::printExpressionType()
{
    cout << exprTypes[this->exprType];
}
