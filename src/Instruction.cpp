#include "Instruction.h"

 void Instruction::setInstruction(Instruction *instr)
 {
     
     if(this->instruction == NULL)
     {
     	this->instruction = instr;
     }else{
     	Instruction * temp = this->instruction;
	     while(temp != NULL)
	     {
	         temp = temp->instruction;
	     }
	   temp->instruction = instr; 
     }
     
 }

Instruction::~Instruction()
{
	//dtor
}

void Instruction::executer()
{
	//nothing to do here
}
