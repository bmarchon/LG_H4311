#include "Instruction.h"

Instruction::Instruction(Instructions instructionType) : Symbol(I)
{
    this->instructionType = instructionType;
}

Instructions Instruction::getInstType()
{
    return this->instructionType;
}

void Instruction::execute()
{
	// instruction I cannot be executed
}

void Instruction::print()
{
	// instruction I has no string representation
}
