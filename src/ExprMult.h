#ifndef EXPRMULT_H
#define EXPRMULT_H
#include "ExprBinaire.h"
#include "OperateurMultiplicatif.h"
class ExprMult : public ExprBinaire
{
	public:
        ExprMult(Symboles type, Expression *expressionGauche,OperateurMultiplicatif *operateur, Expression *expressionDroite);
		virtual ~ExprMult();
        double eval(const map<string, double> &valeurs);

	protected:
	private:
        OperateurMultiplicatif *operateur;
};

#endif // EXPRMULT_H
