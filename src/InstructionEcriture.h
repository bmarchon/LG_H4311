#ifndef INSTRUCTIONECRITURE_H
#define INSTRUCTIONECRITURE_H
#include "Instruction.h"
#include "Expression.h"
class InstructionEcriture : public Instruction
{
public:
    InstructionEcriture(Symbole *exp){expression = exp ;}
    ~InstructionEcriture();

protected:
    Symbole *expression;
};

#endif // INSTRUCTIONECRITURE_H
