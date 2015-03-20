#include "Val.h"

Val::Val(double valeur) : Expression(VAL)
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
double Val::eval() {
	return 4.0;
}*/