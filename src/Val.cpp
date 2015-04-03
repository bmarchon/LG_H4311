#include "Val.h"

Val::Val(double valeur) : Expression(VALEUR, VAL)
{
	this->doubleVal = valeur;
}

Val::Val(Symbols type, Val *v) : Expression(VALEUR, type)
{
	this->doubleVal = v->doubleVal;
}

void Val::setValue(double value)
{
    this->value = value;
}

double Val::eval()
{
	return this->value;
}

void Val::print()
{
    cout << this->value;
}
