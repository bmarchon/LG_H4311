#include "Identifiant.h"

Identifiant::Identifiant(string idVal) : Expression(ID)
{
	 //ctor
	this->idVal = idVal;
	this->valNum = NULL;
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
    
    if(valNum != NULL)
    {
    	return valNum->eval();
    }else{
        cout << "error trying to evaluate value for " << idVal << " (in Identifiant)" <<  endl;
    	return 0.0;
    }
}

void Identifiant::setValeurNum(Val *valNum)
{
    this->valNum = valNum;
}

Val *Identifiant::getValeurNum()
{
    return valNum;
}
