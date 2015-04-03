#include "Instruction.h"

Instruction::Instruction(Instructions instructionType) : Symbole(I)
{
    this->instructionType = instructionType;
}

Instructions Instruction::getInstType()
{
    return this->instructionType;
}

void Instruction::executer()
{
	// instruction I cannot be executed
}

void Instruction::afficher()
{
	// instruction I has no string representation
}
