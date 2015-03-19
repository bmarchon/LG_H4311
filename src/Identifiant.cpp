#include "Identifiant.h"

Identifiant::Identifiant(string idVal) : Symbole(ID)
{
	 //ctor
	this->idVal = idVal;
}

Identifiant::~Identifiant()
{
	//dtor
}

string Identifiant::valeur()
{
	return this->idVal;
}