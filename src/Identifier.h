#ifndef IDENTIFIER_H
#define IDENTIFIER_H

#include "Expression.h"
#include "Val.h"

#include <iostream>

using namespace std;

class Identifier : public Expression
{
	public:
        Identifier(string name);
        Identifier(Symbols type, Identifier *ident);
        virtual ~Identifier() {}
        bool *isInitialized();
        string getName();
        void setValue(double valeur);
        void setValue(Val * valeur);
        Val *getValue();
        double eval();
        void print(); // Display the value for the representation
	private:
        string name;
        Val * value;
        // could be done smarter?
        bool * isInit = new bool(false);
};

#endif // IDENTIFIER_H
