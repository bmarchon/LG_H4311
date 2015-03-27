#ifndef EXPRMULT_H
#define EXPRMULT_H
#include "ExprBinaire.h"
#include "OperateurMultiplicatif.h"

#include <iostream>

class ExprMult : public ExprBinaire
{
	public:
        	ExprMult(Symboles type, Expression *expressionGauche,OperateurMultiplicatif *operateur, Expression *expressionDroite);
		virtual ~ExprMult();
        	double eval();
    		void afficher(); // Display the value for the representation

	protected:
	private:
        OperateurMultiplicatif *operateur;
};

#endif // EXPRMULT_H
