#include "ExprBinaire.h"
ExprBinaire::ExprBinaire(Symboles type, Expression *exprDroite, Expression *exprGauche):Expression(BIN, type)
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
