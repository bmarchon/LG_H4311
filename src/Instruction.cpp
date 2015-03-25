#include "Instruction.h"

 void Instruction::setInstruction(Instruction *instr)
 {
     Instruction *temp = this->instruction;
     while(temp != NULL)
     {
         temp = temp->instruction;
     }
     temp = instr; //à corriger 
 }

Instruction::~Instruction()
{
	//dtor
}
