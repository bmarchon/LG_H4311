#include "Instruction.h"

 void Instruction::setInstruction(Instruction *instr)
 {
     Instruction *temp = this->instruction;
     if(temp == NULL)
     {
     	this->instruction = instr;
     }else{
	     while(temp->instruction != NULL)
	     {
	         temp = temp->instruction;
	     }
	     temp->instruction = instr; //à corriger 
     }
     
 }

Instruction::~Instruction()
{
	//dtor
}

void Instruction::executer(map<string, double> &valeurs)
{
	//nothing to do here
}
