#include "Identifiant.h"

Identifiant::Identifiant(string idVal) : Expression(IDENT,ID)
{
	 //ctor
	this->idVal = idVal;
	this->valNum = new Val();
	//*this->isInit = false;
    //cout << "call to Identifiant-ctor1 : " << idVal << " " << "NULL" << endl;
}

Identifiant::Identifiant(Symboles type, Identifiant *ident): Expression(IDENT,type)
{
    this->idVal = ident->valeur();
    this->valNum = ident->getValeurNum();
    //this->isInit = ident->isInitialized();
    //cout << "call to Identifiant-ctor2 : " << this->idVal << " " << this->valNum << endl;
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
    if(this->valNum != NULL)
    {
    	return this->valNum->eval();
    }
    else
    {
        cout << "error trying to evaluate value for " << idVal << " (in Identifiant)" <<  endl;
    	  return 0.0;
    }
}

void Identifiant::setValeurNum(double valeur)
{
    this->valNum->setValeur(valeur);
    //*this->isInit = true;
}

void Identifiant::setValeurNum(Val * valeur)
{
    this->valNum = valeur;
    //*this->isInit = true;
}

Val *Identifiant::getValeurNum()
{
    return this->valNum;
}

bool *Identifiant::isInitialized()
{
    return this->isInit;
}

void Identifiant::afficher(){
	cout << this->idVal;
}
