#include "ExprAdd.h"


ExprAdd::ExprAdd(Symbole *exprGauche, Symbole *opAdd, Symbole *exprDroite):ExprBinaire(EXPR, exprGauche, exprDroite)
{
    opAdditif = opAdd;
}


ExprAdd::~ExprAdd()
{
	//dtor
}

double ExprAdd::eval(const map<string, double> &valeurs)
{
	return 0.0;
}
