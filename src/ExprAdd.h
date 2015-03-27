#ifndef EXPRADD_H
#define EXPRADD_H
#include "ExprBinaire.h"
#include "OperateurAdditif.h"
#include "Symbole.h"

#include <iostream>
#include <string>

using namespace std;

class ExprAdd : public ExprBinaire
{
	public:
        ExprAdd(Expression *exprGauche, OperateurAdditif *opAdd, Expression *exprDroite);
		virtual ~ExprAdd();
        double eval();
    	void afficher(); // Display the value for the representation

	protected:
	private:
        OperateurAdditif *opAdditif;
};

#endif // EXPRADD_H
