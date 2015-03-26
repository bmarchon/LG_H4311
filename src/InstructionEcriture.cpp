#include "InstructionEcriture.h"

InstructionEcriture::InstructionEcriture(Expression *exp):Instruction(ECR)
{
	expression = exp ;
}

InstructionEcriture::~InstructionEcriture()
{

}

void InstructionEcriture::executer()
{
	cout << expression->eval() << endl;
}

