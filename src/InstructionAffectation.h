#ifndef INSTRUCTIONAFFECTATION_H
#define INSTRUCTIONAFFECTATION_H
#include "Instruction.h"
#include "Identifiant.h"
#include "Expression.h"

class InstructionAffectation : public Instruction
{
    public:
        InstructionAffectation(Identifiant *id, Expression *expr);
        ~InstructionAffectation();
        void executer();
        Instructions getType();
        void afficher(); // Display the value for the representation
        Expressions getExpressionType();
        Expression * getExpression();
        void setExpression(Expression *);
    protected:
        Identifiant *identifiant;
        Expression *expression;
};

#endif // INSTRUCTIONAFFECTATION_H
