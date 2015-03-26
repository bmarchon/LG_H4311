#include "Instruction.h"

Instruction::Instruction(Instructions type): Symbole(I)
{
	this->type = type;
	instruction = NULL;
}
Instruction::Instruction(): Symbole(I)
{
	instruction = NULL;
}

Instructions Instruction::getInstType()
{
	return this->type;
}
/*
 void Instruction::setInstruction(Instruction *instr)
 {
     
     if(this->instruction == NULL)
     {
     	this->instruction = instr;
     }else{
     	Instruction * temp = this;
	     while(temp->instruction != NULL)
	     {
	         temp = temp->instruction;
	     }
	   temp->instruction = instr; 
     }
     
 }*/

Instruction::~Instruction()
{
	//dtor
}

void Instruction::executer()
{
	//nothing to do here
}

void Instruction::afficher()
{
	//nothing to do here
}
