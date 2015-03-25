#ifndef EXPRESSION_H
#define EXPRESSION_H
#include "Symbole.h"
#include <map>
class Expression : public Symbole
{
	public:
        Expression(Symboles type): Symbole(type){}
		virtual ~Expression();
        virtual double eval(const map<string, double> &valeurs) = 0;

	protected:
	private:
};

#endif // EXPRESSION_H
