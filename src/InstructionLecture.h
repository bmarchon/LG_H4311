#ifndef INSTRUCTIONLECTURE_H
#define INSTRUCTIONLECTURE_H
#include "Instruction.h"
#include "Identifiant.h"

class InstructionLecture : public Instruction
{
public:
    InstructionLecture(Symbole *s);
    ~InstructionLecture();

private:
    Symbole *identifiant;
};

#endif // INSTRUCTIONLECTURE_H
