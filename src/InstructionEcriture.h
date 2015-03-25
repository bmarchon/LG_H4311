#ifndef INSTRUCTIONECRITURE_H
#define INSTRUCTIONECRITURE_H
#include "Instruction.h"
#include "Expression.h"

#include <iostream>

using namespace std;

class InstructionEcriture : public Instruction
{
public:
    InstructionEcriture(Expression *exp){expression = exp ;}
    ~InstructionEcriture();
    void executer(map<string, double> &valeurs);

protected:
    Expression *expression;
};

#endif // INSTRUCTIONECRITURE_H
