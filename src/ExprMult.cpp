#include "ExprMult.h"


ExprMult::ExprMult(Symboles type, Symbole *exprGauche,Symbole *operateur, Symbole *exprDroite):ExprBinaire(type, exprGauche, exprDroite)
{
    this->operateur = operateur;
}


ExprMult::~ExprMult()
{
	//dtor
}

double ExprMult::eval(const map<string, double> &valeurs)
{
	return 0.0;
}
