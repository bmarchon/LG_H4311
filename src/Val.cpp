#include "Val.h"

Val::Val():Expression(VALEUR, VAL){}
Val::Val(double valeur) : Expression(VALEUR, VAL)
{
	 //ctor
	this->doubleVal = valeur;
}

Val::~Val()
{
	//dtor
}

double Val::eval()
{
	return this->doubleVal;
}


/*
Val& Val::operator = (const Val &valeur)
{
    this->doubleVal = valeur->valeur();
    return *this;
}
*/
