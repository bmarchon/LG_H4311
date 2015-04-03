#ifndef INSTRUCTIONAFFECTATION_H
#define INSTRUCTIONAFFECTATION_H

#include "Instruction.h"
#include "Identifier.h"
#include "Expression.h"

#include <iostream>

class InstructionAffectation : public Instruction
{
    public:
        InstructionAffectation(Identifier *id, Expression *expr);
        virtual ~InstructionAffectation() {}
        Expressions getExpressionType();
        Expression * getExpression();
        void setExpression(Expression *);
        Identifier * getIdentifier();
        void print(); // Display the value for the representation
        void execute();
    private:
        Identifier *identifier;
        Expression *expression;
};

#endif // INSTRUCTIONAFFECTATION_H
