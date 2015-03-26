#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include "Symbole.h"

#include <map>

class Instruction : public Symbole
{
	public:
        Instruction() : Symbole(I){ instruction = NULL;}
		virtual ~Instruction();

		void setInstruction(Instruction *instr);
		virtual void executer(); //cannot be pure virtual because of instantiation in Etat1aN

	protected:
        Instruction *instruction;
	private:
};

#endif // INSTRUCTION_H
