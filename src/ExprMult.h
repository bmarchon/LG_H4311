#ifndef EXPRMULT_H
#define EXPRMULT_H
#include "ExprBinaire.h"

class ExprMult : public ExprBinaire
{
	public:
        ExprMult(Symboles type, Symbole *expressionGauche,Symbole *operateur, Symbole *expressionDroite);
		virtual ~ExprMult();
        double eval(const map<string, double> &valeurs);

	protected:
	private:
        Symbole *operateur;
};

#endif // EXPRMULT_H
