#include "InstructionLecture.h"

InstructionLecture::InstructionLecture(Identifier *identifier) : Instruction(LEC)
{
    this->identifier = identifier;
}

void InstructionLecture::execute()
{
	double inputValue = 0.0;
	string input;
 	cout << "enter value for " << this->identifier->getName() << endl;
  	getline (cin,input);
  	stringstream(input) >> inputValue;

  	this->identifier->setValue(inputValue);
}

void InstructionLecture::print()
{
    cout << "lire ";
    this->identifier->print();
    cout << ";" << endl;
}

Identifier * InstructionLecture::getIdentifier()
{
    return this->identifier;
}
