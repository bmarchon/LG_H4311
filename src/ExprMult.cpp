#include "ExprMult.h"


ExprMult::ExprMult(Symboles type, Expression *exprGauche,OperateurMultiplicatif *opMult, Expression *exprDroite):ExprBinaire(type, exprGauche, exprDroite)
{
    this->opMult = opMult;
}

ExprMult::ExprMult(Expression *exprGauche, OperateurMultiplicatif *opMult, Expression *exprDroite):ExprBinaire(EXPR, exprGauche, exprDroite)
{
    this->opMult = opMult;
}


ExprMult::~ExprMult()
{
	//dtor
}

double ExprMult::eval()
{
    double res;
    switch(opMult->getChar())	
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

void ExprMult::afficher() {
    exprGauche->afficher();
	this->opMult->afficher();
    exprDroite->afficher();
}

char ExprMult::operateur()
{
	return opMult->getChar();
}

