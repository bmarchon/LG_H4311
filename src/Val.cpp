#include "Val.h"

Val::Val():Expression(VAL){}
Val::Val(double valeur) : Expression(VAL)
{
	 //ctor
	this->doubleVal = valeur;
}

Val::~Val()
{
	//dtor
}

double Val::eval(const map<string, double> &valeurs)
{
	return this->doubleVal;
}


double Val::valeur()
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
