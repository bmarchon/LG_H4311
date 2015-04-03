#include "Identifier.h"

Identifier::Identifier(string name) : Expression(IDENT,ID)
{
	this->name = name;
	this->value = new Val();
	*this->isInit = false;
}

Identifier::Identifier(Symbols type, Identifier *ident) : Expression(IDENT,type)
{
    this->name = ident->getName();
    this->value = ident->getValue();
    this->isInit = ident->isInitialized();
}

bool *Identifier::isInitialized()
{
    return this->isInit;
}

string Identifier::getName()
{
	return this->name;
}

void Identifier::setValue(double value)
{
    this->value->setValue(value);
    *this->isInit = true;
}

void Identifier::setValue(Val * value)
{
    this->value = value;
    *this->isInit = true;
}

Val *Identifier::getValue()
{
    return this->value;
}

double Identifier::eval()
{
    if(*this->isInit)
    {
    	return this->value->eval();
    }
    else
    {
        cout << "error trying to evaluate value for " << this->name << " (in Identifier) Identifier is not initialized" <<  endl;
    	return 0.0;
    }
}

void Identifier::print()
{
	cout << this->name;
}
