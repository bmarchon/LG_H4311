#include "InstructionEcriture.h"

InstructionEcriture::InstructionEcriture() : Instruction()
{
// TO-DO: when necessary here, perhaps elsewhere too!
	this->expression = NULL;
}

InstructionEcriture::InstructionEcriture(Expression *exp) : Instruction(ECR)
{
	if(exp->getType() != EXPR)
	{
		this->expression = NULL;
		cout << "error : trying to instantiate InstructionEcriture with non-expression type: ";
		exp->printType();
		cout << endl;
	}else{
		this->expression = exp;
	}	
}

Expressions InstructionEcriture::getExpressionType()
{
	return this->expression->getExpressionType();
}

Expression * InstructionEcriture::getExpression()
{
	return this->expression;
}

void InstructionEcriture::setExpression(Expression* exp)
{
    this->expression = exp;
}

void InstructionEcriture::execute()
{
	if(expression != NULL)
	{
		cout << expression->eval() << endl;
	}
	else
	{
		cout << "error while trying to print expression" << endl;
	}
}

void InstructionEcriture::print()
{
	cout << "ecrire ";
	this->expression->print();
    cout << ";" << endl;
}
