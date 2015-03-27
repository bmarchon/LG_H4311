#ifndef INSTRUCTIONECRITURE_H
#define INSTRUCTIONECRITURE_H
#include "Instruction.h"
#include "Expression.h"

#include <iostream>

using namespace std;

class InstructionEcriture : public Instruction
{
public:
    
	InstructionEcriture();
    InstructionEcriture(Expression *exp);
    ~InstructionEcriture();
	Expressions getExpressionType();
    void executer();
    //void afficher(); // Display the value for the representation
	Expression * getExpression();

protected:
  
    Expression * expression;
};

#endif // INSTRUCTIONECRITURE_H
