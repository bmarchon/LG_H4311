#ifndef EXPRESSION_H
#define EXPRESSION_H
#include "Symbole.h"
#include <map>
#include <iostream>

typedef enum {BIN, PAR, VALEUR, IDENT} Expressions;
class Expression : public Symbole
{
	public:
        	Expression();
		//Expression(Symboles type): Symbole(type){}
		Expression(Expressions typeExp, Symboles type);
		void setExpression(Expression *expr);
		virtual ~Expression();
        	virtual double eval() = 0;
    		void afficher(); // Display the value for the representation
		Expressions getExprType();

	protected:
		Expressions typeExp;
		Expression *expression;
	private:
};

#endif // EXPRESSION_H
