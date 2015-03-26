#ifndef EXPRBINAIRE_H
#define EXPRBINAIRE_H
#include "Expression.h"
#include <iostream>

using namespace std;

class ExprBinaire : public Expression
{
	public:
        ExprBinaire(Symboles type): Expression(type){}
        ExprBinaire(Symboles type, Expression *exprDroite, Expression *exprGauche);
		virtual ~ExprBinaire();
        virtual double eval() = 0;
    	void afficher(); // Display the value for the representation

	protected:
        Expression * exprGauche;
        Expression * exprDroite;
	private:
};

#endif // EXPRBINAIRE_H
