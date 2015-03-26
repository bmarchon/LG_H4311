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
	protected:
	private:
		Expression * expression;
};

#endif // EXPRPAR_H
