#include "Programme.h"



Programme::Programme():Symbole(P)
{

}

Programme::~Programme()
{
	//dtor
}

void Programme::ajouter(Declaration* dec)
{
	declarations.push_back(dec);
}

void Programme::ajouter(Instruction* instr)
{
	instructions.push_back(instr);
}

void Programme::executer()
{
	for(auto it = instructions.begin(); it != instructions.end(); ++it) {
    	(*it)->executer();
	}
}

vector<Declaration*> Programme::getDeclarations()
{
	return declarations;
}
vector<Instruction*> Programme::getInstructions()
{
	return instructions;
}