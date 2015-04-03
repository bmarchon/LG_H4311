#include "ExprBinaire.h"

ExprBinaire::ExprBinaire(Symboles type, Expression *exprLeft, Operator *op, Expression *exprRight) : Expression(BIN, type)
{
    this->exprLeft = exprLeft;
    this->exprRight = exprRight;
    this->op = op;
}

Expression* ExprBinaire::getLeft() 
{
	return this->exprLeft;
}

void ExprBinaire::setLeft(Expression * g) 
{
	this->exprLeft = g;
}

Expression* ExprBinaire::getRight()
{
	return this->exprRight;
}

void ExprBinaire::setRight(Expression * d) 
{
	this->exprRight = d;
}

Operator* ExprBinaire::getOperator()
{
    return this->op;
}

void ExprBinaire::setOperator(Operator * op)
{
    this->op = op;
}
