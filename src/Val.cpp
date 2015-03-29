#include "Val.h"

Val::Val():Expression(VALEUR, VAL){}
Val::Val(double valeur) : Expression(VALEUR, VAL)
{
	 //ctor
	this->doubleVal = valeur;
}

Val::Val(Symboles type, Val *v) : Expression(VALEUR, type)
{
	 //ctor
	this->doubleVal = v->doubleVal;
}

Val::~Val()
{
	//dtor
}

double Val::eval()
{
	return this->doubleVal;
}

void Val::setValeur(double valeur)
{
    this->doubleVal = valeur;
}

void Val::afficher()
{
    cout << doubleVal;
}

/*
Val& Val::operator = (const Val &valeur)
{
    this->doubleVal = valeur->valeur();
    return *this;
}
*/
