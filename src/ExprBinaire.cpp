#include "ExprBinaire.h"
ExprBinaire::ExprBinaire(Symboles type, Symbole *exprDroite, Symbole *exprGauche):Expression(type)
{
    this->exprGauche = exprGauche;
    this->exprDroite = exprDroite;
}

ExprBinaire::~ExprBinaire()
{
	//dtor
}

double ExprBinaire::eval(const map<string, double> &valeurs)
{
	return 4.0;
}
