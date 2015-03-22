#ifndef EXPRBINAIRE_H
#define EXPRBINAIRE_H
#include "Expression.h"

class ExprBinaire : public Expression
{
	public:
        ExprBinaire(Symboles type): Expression(type){}
        ExprBinaire(Symboles type, Expression *exprDroite, Expression *exprGauche);
		virtual ~ExprBinaire();
        double eval(const map<string, double> &valeurs);

	protected:
        Symbole * exprGauche;
        Symbole * exprDroite;
	private:
};

#endif // EXPRBINAIRE_H
