#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include "Symbole.h"

class Instruction : public Symbole
{
	public:
        Instruction() : Symbole(I){}
		virtual ~Instruction();

	protected:
	private:
};

#endif // INSTRUCTION_H
