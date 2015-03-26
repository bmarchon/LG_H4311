#include "InstructionEcriture.h"



InstructionEcriture::~InstructionEcriture()
{

}

void InstructionEcriture::executer()
{
	cout << expression->eval() << endl;
}

