#ifndef EXPRMULT_H
#define EXPRMULT_H

#include "ExprBinaire.h"
#include "OperateurMultiplicatif.h"

#include <iostream>

class ExprMult : public ExprBinaire
{
	public:
     	ExprMult(Symboles type, Expression *expressionGauche,OperateurMultiplicatif *opMult, Expression *expressionDroite);
     	ExprMult(Expression *exprGauche, OperateurMultiplicatif *opMult, Expression *exprDroite);
			virtual ~ExprMult();
     	double eval();
  		void afficher(); // Display the value for the representation
   		virtual char operateur();
	protected:
	private:
      OperateurMultiplicatif *opMult;
};

#endif // EXPRMULT_H
