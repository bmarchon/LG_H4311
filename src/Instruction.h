#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include "Symbole.h"

#include <map>

typedef enum {AFF, ECR, LEC} Instructions;
using namespace std;

class Instruction : public Symbole
{
	public:
		Instruction();
        	Instruction(Instructions type);
		virtual ~Instruction();
		void setInstruction(Instruction *instr);
		virtual void executer(); //cannot be pure virtual because of instantiation in Etat1aN
		Instructions getInstType();
    		void afficher(); // Display the value for the representation
	protected:
        Instruction *instruction;
        Instructions type;
	private:
};

#endif // INSTRUCTION_H
