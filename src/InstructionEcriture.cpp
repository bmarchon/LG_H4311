#include "InstructionEcriture.h"
#include "Symbole.h"

InstructionEcriture::InstructionEcriture(): Instruction()
{
	expression = NULL;
}

InstructionEcriture::InstructionEcriture(Expression *exp) : Instruction(ECR)
{
	if(exp->getType() != EXPR)
	{
		expression = NULL;
		cout << "error : trying to instantiate InstructionEcriture with non-expression type: " << exp->afficherType() << endl;
	}else{
		expression = exp;
	}
	
}

InstructionEcriture::~InstructionEcriture()
{

}

void InstructionEcriture::executer()
{
	if(expression != NULL)
	{
		cout << expression->eval() << endl;
	}else{
		cout << "error while trying to print expression" << endl;
	}
}


Expressions InstructionEcriture::getExpressionType()
{
	return this->expression->getExprType();
}

Expression * InstructionEcriture::getExpression()
{
	return this->expression;
}

void InstructionEcriture::setExpression(Expression* exp)
{
    this->expression = exp;
}

void InstructionEcriture::afficher()
{
	cout << "ecrire ";
	this->expression->afficher();
    cout << ";" << endl;
}
