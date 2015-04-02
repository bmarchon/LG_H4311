#include "Simple.h"

Simple::Simple()
{
	//ctor
}

Simple::~Simple()
{
	//dtor
}

Simple::getSimpleType()
{
	return this->type;
}

Simple::printType()
{
    cout << simpleTypes[this->type];
}
