#include "ExprMult.h"


ExprMult::ExprMult(Symboles type, Expression *exprGauche,OperateurMultiplicatif *operateur, Expression *exprDroite):ExprBinaire(type, exprGauche, exprDroite)
{
    this->operateur = operateur;
}


ExprMult::~ExprMult()
{
	//dtor
}

double ExprMult::eval()
{
    double res;	
	switch(operateur->getType())
	{
		case FOIS:
			res = exprGauche->eval() * exprDroite->eval();
			break;
		case DIVISE:
			if(exprDroite->eval() != 0.0)
			{
				res = exprGauche->eval() / exprDroite->eval();
			}
			break;
		default :
			res = 0.0;
			//cout << "error: " + opAdditif->getChar() + " is not a valid additive operator" << endl;
	}
	return res;
}
