#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include "Symbole.h"

#include <map>

using namespace std;

class Instruction : public Symbole
{
	public:
        Instruction() : Symbole(I){ instruction = NULL;}
		virtual ~Instruction();

		void setInstruction(Instruction *instr);
		virtual void executer(); //cannot be pure virtual because of instantiation in Etat1aN
    	void afficher(); // Display the value for the representation
	protected:
        Instruction *instruction;
	private:
};

#endif // INSTRUCTION_H
