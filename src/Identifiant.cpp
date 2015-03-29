#include "Identifiant.h"

Identifiant::Identifiant(string idVal) : Expression(IDENT,ID)
{
	 //ctor
	this->idVal = idVal;
	this->valNum = new Val();
    //cout << "call to Identifiant-ctor1 : " << idVal << " " << "NULL" << endl;
}

Identifiant::Identifiant(Symboles type, Identifiant *ident): Expression(IDENT,type)
{
    this->idVal = ident->valeur();
    this->valNum = ident->getValeurNum();
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
    }else{
        cout << "error trying to evaluate value for " << idVal << " (in Identifiant)" <<  endl;
    	return 0.0;
    }
}

void Identifiant::setValeurNum(double valeur)
{
    this->valNum->setValeur(valeur);
}

void Identifiant::setValeurNum(Val * valeur)
{
    this->valNum = valeur;
}

Val *Identifiant::getValeurNum()
{
    return this->valNum;
}

void Identifiant::afficher(){
	cout << this->idVal;
}
