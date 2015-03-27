#include "InstructionEcriture.h"

InstructionEcriture::InstructionEcriture(Expression *exp):Instruction(ECR)
{
	expression = exp ;
}

InstructionEcriture::~InstructionEcriture()
{

}

void InstructionEcriture::executer()
{
	cout << expression->eval() << endl;
}

void InstructionEcriture::afficher() {
	cout << "Ecrire ";
	this->expression->afficher();
    cout << ";" << endl;
}

Expressions InstructionEcriture::getExpressionType()
{
	return this->expression->getExprType();
}
