#ifndef INSTRUCTIONLECTURE_H
#define INSTRUCTIONLECTURE_H

#include "Instruction.h"
#include "Identifier.h"

#include <iostream>

class InstructionLecture : public Instruction
{
public:
    InstructionLecture(Identifier * id);
    virtual ~InstructionLecture() {}
    Identifier * getIdentifier();
    void execute();
    void print(); // Display the value for the representation
private:
    Identifier * identifier;
};

#endif // INSTRUCTIONLECTURE_H
