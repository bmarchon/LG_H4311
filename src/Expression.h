#ifndef EXPRESSION_H
#define EXPRESSION_H
#include "Symbole.h"

class Expression : public Symbole
{
	public:
        Expression(): Symbole(EXPR){}
		virtual ~Expression();
		virtual double eval() = 0;
	protected:
	private:
};

#endif // EXPRESSION_H
