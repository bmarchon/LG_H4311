#include "Identifiant.h"

Identifiant::Identifiant(string idVal) : Expression(ID)
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

double Identifiant::eval()
{
	return 0.0;
}