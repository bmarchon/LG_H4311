#include "Operator.h"

Operator::Operator(Symbols type, char op) : Symbol(type)
{
    this->op = op;
}

char Operator::getChar()
{
    return this->op;
}

void Operator::setChar(char op)
{
    this->op = op;
}
