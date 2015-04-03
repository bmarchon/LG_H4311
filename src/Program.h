#ifndef PROGRAM_H
#define PROGRAM_H

#include "Symbol.h"
#include "Declaration.h"
#include "Instruction.h"
#include <vector>

using namespace std;

class Program : public Symbol
{
	public:
        Program() : Symbol(P) {}
		virtual ~Program() {}
		void add(Declaration* dec);
		vector<Declaration *> getDeclarations();
		void add(Instruction* instr);
        vector<Instruction *> getInstructions();
		void execute();
    	void print(); // Display the value for the representation
	private:
        vector<Declaration *> declarations;
        vector<Instruction *> instructions;
};

#endif // PROGRAM_H
