#include "Identifiant.h"

Identifiant::Identifiant(string idVal) : Expression(ID)
{
	 //ctor
	this->idVal = idVal;
}

Identifiant::Identifiant(Symboles type, Identifiant *ident): Expression(type)
{
    this->idVal = ident->valeur();
    this->valNum = ident->getValeurNum();
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
    return valNum->eval(); 
}

void Identifiant::setValeurNum(Val *valNum)
{
    this->valNum = valNum;
}

Val *Identifiant::getValeurNum()
{
    return valNum;
}
