#ifndef INSTRUCTIONECRITURE_H
#define INSTRUCTIONECRITURE_H

#include "Instruction.h"
#include "Expression.h"

#include <iostream>

class InstructionEcriture : public Instruction
{
    public:
        InstructionEcriture();
        InstructionEcriture(Expression *exp);
        virtual ~InstructionEcriture() {}
        Expressions getExpressionType();
        void execute();
        void print(); // Display the value for the representation
        Expression * getExpression();
        void setExpression(Expression *);
    protected:
        Expression * expression;
};

#endif // INSTRUCTIONECRITURE_H
