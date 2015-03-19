#include "Val.h"

Val::Val(double valeur) : Symbole(VAL)
{
	 //ctor
	this->doubleVal = valeur;
}

Val::~Val()
{
	//dtor
}

double Val::valeur()
{
	return this->doubleVal;
}