#ifndef EXPRESSION_H
#define EXPRESSION_H
#include "Symbole.h"
#include <map>
#include <iostream>

typedef enum {BIN, PAR, VALEUR, IDENT} Expressions;
static const string exprTypes[] = { "BIN", "PAR", "VALEUR", "IDENT" };

class Expression : public Symbole
{
	public:
      Expression();
		Expression(Expressions typeExp, Symboles type);
		void setExpression(Expression *expr);
		virtual ~Expression();
      	virtual double eval() = 0;
      	virtual void afficher(); // Display the value for the representation
		Expressions getExprType();
		Expression * getExpression();
		virtual string afficherExprType();
	protected:
		Expressions typeExp;
      	Expression *expression;

	private:
};

#endif // EXPRESSION_H
