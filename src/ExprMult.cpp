#include "ExprMult.h"


ExprMult::ExprMult(Symboles type, Expression *exprGauche,OperateurMultiplicatif *operateur, Expression *exprDroite):ExprBinaire(type, exprGauche, exprDroite)
{
    this->operateur = operateur;
}


ExprMult::~ExprMult()
{
	//dtor
}

double ExprMult::eval(const map<string, double> &valeurs)
{
    if(operateur->getType() == FOIS)
    {
        //return exprGauche->eval(NULL) * exprDroite->eval(NULL);
        return 0.0;
    }
}
