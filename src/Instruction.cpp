#include "Instruction.h"

Instruction::Instruction(Instructions instructionType): Symbole(I)
{
    this->instructionType = instructionType;
	//instruction = NULL;
}
Instruction::Instruction(): Symbole(I)
{
    //this->instruction = NULL;
}

Instructions Instruction::getInstType()
{
    return this->instructionType;
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
	cout << "error trying to print expression that should be abstract" << endl;
}
