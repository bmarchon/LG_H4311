#include "Val.h"

Val::Val(double value) : Expression(VALEUR, VAL)
{
	this->value = value;
}

Val::Val(Symbols type, Val *v) : Expression(VALEUR, type)
{
	this->value = v->value;
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
