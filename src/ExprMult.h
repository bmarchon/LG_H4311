#ifndef EXPRMULT_H
#define EXPRMULT_H
#include "ExprBinaire.h"
#include "OperateurMultiplicatif.h"

#include <iostream>

class ExprMult : public ExprBinaire
{
	public:
        	ExprMult(Symboles type, Expression *expressionGauche,OperateurMultiplicatif *opMult, Expression *expressionDroite);
			virtual ~ExprMult();
        	double eval();
    		virtual void afficher(); // Display the value for the representation
    		virtual char operateur();

	protected:
	private:
        OperateurMultiplicatif *opMult;
};

#endif // EXPRMULT_H
