/**
    This abstract class is the model for all symbols used
    in the automate
*/

#include "Symbol.h"

Symbol::Symbol(Symbols type)
{
	this->type = type;
}

Symbols Symbol::getType()
{
    return this->type;
}

void Symbol::setType(Symbols type)
{
    this->type = type;
}

void Symbol::printType()
{
	cout << types[this->type];
}
