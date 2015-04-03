#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include "Symbol.h"

typedef enum {AFF, ECR, LEC} Instructions;

class Instruction : public Symbol
{
	public:
		Instruction() : Symbol(I) {}
        Instruction(Instructions instructionType);
		virtual ~Instruction() {}
		Instructions getInstType();
		virtual void execute(); //cannot be pure virtual because of instantiation in Etat1aN
    	virtual void print(); // Display the value for the representation
	protected:
        Instructions instructionType;
	private:
};

#endif // INSTRUCTION_H
