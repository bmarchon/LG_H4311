#ifndef INSTRUCTIONAFFECTATION_H
#define INSTRUCTIONAFFECTATION_H
#include "Instruction.h"
#include "Identifiant.h"
#include "Expression.h"
class InstructionAffectation : public Instruction
{
public:
    InstructionAffectation();
    ~InstructionAffectation();

protected:
    //Identifiant identifiant;
    Expression *exp;
};

#endif // INSTRUCTIONAFFECTATION_H
