#ifndef EXPRBINAIRE_H
#define EXPRBINAIRE_H
#include "Expression.h"

class ExprBinaire : public Expression
{
	public:
        ExprBinaire(Symboles type): Expression(type){}
		virtual ~ExprBinaire();
		double eval();
	protected:
	private:
};

#endif // EXPRBINAIRE_H
