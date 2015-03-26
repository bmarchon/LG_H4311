#include "ExprBinaire.h"
ExprBinaire::ExprBinaire(Symboles type, Expression *exprDroite, Expression *exprGauche):Expression(type)
{
    this->exprGauche = exprGauche;
    this->exprDroite = exprDroite;
}

ExprBinaire::~ExprBinaire()
{
	//dtor
}


void ExprBinaire::afficher() {
	cout << "ExprPar ";
	this->exprGauche->afficher();
	this->exprDroite->afficher();
}