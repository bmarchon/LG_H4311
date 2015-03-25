#include "ExprAdd.h"


ExprAdd::ExprAdd(Expression *exprGauche, OperateurAdditif *opAdd, Expression *exprDroite):ExprBinaire(EXPR, exprGauche, exprDroite)
{
    opAdditif = opAdd;
}


ExprAdd::~ExprAdd()
{
	//dtor
}

double ExprAdd::eval(const map<string, double> &valeurs)
{
	double res;	
	switch(opAdditif->getType())
	{
		case PLUS:
			res = exprGauche->eval(valeurs) + exprDroite->eval(valeurs);
			break;
		case MOINS:
			res = exprGauche->eval(valeurs) + exprDroite->eval(valeurs);
			break;
		default :
			res = 0.0;
			//cout << "error: " + opAdditif->getChar() + " is not a valid additive operator" << endl;
	}
	return res;
}
