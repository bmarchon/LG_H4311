#ifndef EXPRPAR_H
#define EXPRPAR_H
#include "Expression.h"

using namespace std;

class ExprPar : public Expression
{
	public:
        	ExprPar(Expression *expr, Symboles type);
		virtual ~ExprPar();
        	double eval();
    		void afficher(); // Display the value for the representation
		//Expression getExpression(); //a implementer
	protected:
	private:
		Expression * expression;
};

#endif // EXPRPAR_H
