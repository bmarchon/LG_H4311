#include "ExprBinaire.h"
ExprBinaire::ExprBinaire(Symboles type, Expression *exprGauche, Expression *exprDroite):Expression(type)
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
