#include "ExprBinaire.h"
ExprBinaire::ExprBinaire(Symboles type, Expression *exprGauche, Expression *exprDroite):Expression(BIN, type)
{
    this->exprGauche = exprGauche;
    this->exprDroite = exprDroite;
}

ExprBinaire::~ExprBinaire()
{
	//dtor
}


void ExprBinaire::afficher() {
	cout << "ExprBin ";
	this->exprGauche->afficher();
	this->exprDroite->afficher();
}
Expression* ExprBinaire::getGauche() 
{
	return this->exprGauche;
}
Expression* ExprBinaire::getDroite()
{
	return this->exprDroite;
}


void ExprBinaire::setGauche(Expression * g) 
{
	this->exprGauche = g;
}
void ExprBinaire::setDroite(Expression * d) 
{
	this->exprDroite = d;
}