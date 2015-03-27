#include "ExprAdd.h"


ExprAdd::ExprAdd(Expression *exprGauche, OperateurAdditif *opAdd, Expression *exprDroite):ExprBinaire(EXPR, exprGauche, exprDroite)
{
    opAdditif = opAdd;
}


ExprAdd::~ExprAdd()
{
	//dtor
}

double ExprAdd::eval()
{
	double res;
	switch(opAdditif->getChar())	
	{
		case '+':
			res = exprGauche->eval() + exprDroite->eval();
			break;
		case '-':
			res = exprGauche->eval() - exprDroite->eval();
			break;
		default :
			res = 0.0;
			cout << "error in evaluating additive expression : " << opAdditif->getChar() << endl;
	}
	return res;
}

void ExprAdd::afficher() {

	this->exprGauche->afficher();
    cout << " " << opAdditif->getChar() << " ";
    this->exprDroite->afficher();
}
