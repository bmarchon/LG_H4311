#include "Expression.h"

Expression::Expression(Expressions typeExp, Symboles type):Symbole(type)
{
	this->typeExp=typeExp;
	expression = NULL;
}

Expression::Expression():Symbole(type)
{
	expression = NULL;
}

Expressions Expression::getExprType()
{
	return this->typeExp;
}

Expression::~Expression()
{
	//dtor
}

void Expression::afficher(){
	
}
Expression * Expression::getExpression()
{
	return this->expression;
}
