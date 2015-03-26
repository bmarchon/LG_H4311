#ifndef EXPRESSION_H
#define EXPRESSION_H
#include "Symbole.h"
#include <map>
#include <iostream>
class Expression : public Symbole
{
	public:
        Expression(Symboles type): Symbole(type){}
		virtual ~Expression();
        virtual double eval() = 0;
    	void afficher(); // Display the value for the representation

	protected:
	private:
};

#endif // EXPRESSION_H
