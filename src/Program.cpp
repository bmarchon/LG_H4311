#include "Program.h"

void Program::add(Declaration* dec)
{
	this->declarations.push_back(dec);
}

vector<Declaration*> Program::getDeclarations()
{
	return this->declarations;
}

void Program::add(Instruction* instr)
{
	this->instructions.push_back(instr);
}

vector<Instruction*> Program::getInstructions()
{
	return this->instructions;
}

void Program::execute()
{
	for(auto it = this->instructions.begin(); it != this->instructions.end(); ++it) {
    	(*it)->execute();
	}
}

void Program::print()
{
	for(unsigned int i = 0; i < this->declarations.size(); i++)
	{
		this->declarations[i]->print();
	}
	for(unsigned int i = 0; i < this->instructions.size(); i++)
	{
		this->instructions[i]->print();
	}
}
