#include "InstructionAffectation.h"
#include "ExprBinaire.h"

InstructionAffectation::InstructionAffectation(Identifiant *id, Expression *expr):Instruction(AFF)
{
    this->identifiant = id;
    this->expression = expr;
}

InstructionAffectation::~InstructionAffectation()
{

}

void InstructionAffectation::executer()
{
	identifiant->setValeurNum(expression->eval());
	// TODO delete previous expression?
}

void InstructionAffectation::afficher() {

    this->identifiant->afficher();
    cout << " := ";
    this->expression->afficher();
    cout << ";" << endl;

}
Expressions InstructionAffectation::getExpressionType()
{
	return this->expression->getExprType();
}


Expression * InstructionAffectation::getExpression()
{
	return this->expression;
}

Identifiant * InstructionAffectation::getIdentifiant()
{
    return this->identifiant;
}
