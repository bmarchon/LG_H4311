#include "Expression.h"

Expression::Expression() : Symbol(type)
{
	this->expression = NULL;
}

Expression::Expression(Expressions type, Symbols type) : Symbol(type)
{
	this->type = type;
	this->expression = NULL;
}

Expression::~Expression()
{
	//dtor
}

//TO-DO getter and setter realy needed or could be done without?

Expression * Expression::getExpression()
{
	return this->expression;
}

void Expression::setExpression(Expression *expression)
{
	this->expression = expression;
}

Expressions Expression::getExpressionType()
{
	return this->type;
}

void Expression::printType()
{
    cout << exprTypes[this->type];
}
