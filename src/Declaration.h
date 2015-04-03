#ifndef DECLARATION_H
#define DECLARATION_H

#include "Symbol.h"

class Declaration : public Symbol
{
	public:
        Declaration() : Symbol(D) {}
        Declaration(Symbols type) : Symbol(type) {}
		virtual ~Declaration() {}
		virtual void print(); // Display the value for the representation
};

#endif // DECLARATION_H
