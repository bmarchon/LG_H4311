#ifndef EXPRBINAIRE_H
#define EXPRBINAIRE_H
#include "Expression.h"
#include <iostream>

using namespace std;

class ExprBinaire : public Expression
{
	public:
      ExprBinaire(Symboles type): Expression(BIN, type){}
      ExprBinaire(Symboles type, Expression *exprGauche, Expression *exprDroite);
	    virtual ~ExprBinaire();
      virtual double eval() = 0;
      virtual char operateur() = 0;
	    void afficher(); // Display the value for the representation
	    Expression* getGauche();
	    Expression* getDroite();
	protected:
      Expression * exprGauche;
      Expression * exprDroite;
	private:
};

#endif // EXPRBINAIRE_H
