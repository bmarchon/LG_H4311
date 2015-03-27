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
	switch(operateur->getChar())
	{
		case '*':
			res = exprGauche->eval() * exprDroite->eval();
			break;
		case '/':
			if(exprDroite->eval() != 0.0)
			{
				res = exprGauche->eval() / exprDroite->eval();
			}else{
				res = 0.0;
				cout << "division by 0, result has been set to 0" << endl;
			}
			break;
		default :
			res = 0.0;
			cout << "error in evaluating multiplicative expression" << endl;
	}
	return res;
}
