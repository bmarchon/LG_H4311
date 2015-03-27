#include "ExprPar.h"
 ExprPar::ExprPar(Expression *expr, Symboles type): Expression(PAR, type)
 {
     expression = expr;
 }
ExprPar::~ExprPar()
{
	//dtor
}

double ExprPar::eval()
{
	return expression->eval();
}

void ExprPar::afficher() {
	cout << "ExprPar ";
	this->expression->afficher();
}
