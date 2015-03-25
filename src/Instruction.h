#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include "Symbole.h"

class Instruction : public Symbole
{
	public:
        Instruction() : Symbole(I){}
        void setInstruction(Instruction *instr);
		virtual ~Instruction();

	protected:
        Instruction *instruction;
	private:
};

#endif // INSTRUCTION_H
