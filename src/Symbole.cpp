#include "Symbole.h"

Symbole::Symbole(Symboles type)
{
	this->type = type;
}

Symbole::~Symbole()
{
	//dtor
}

Symboles Symbole::getType()
{
    return type;
}

string Symbole::afficherType()
{
	return types[this->type];
}