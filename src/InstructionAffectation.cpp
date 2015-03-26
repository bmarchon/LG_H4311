#include "InstructionAffectation.h"

InstructionAffectation::InstructionAffectation(Identifiant *id, Expression *expr):Instruction()
{
    identifiant = id;
    expression = expr;
}

InstructionAffectation::~InstructionAffectation()
{

}

void InstructionAffectation::executer()
{
	identifiant->setValeurNum(new Val(expression->eval()));
	// TODO delete previous expression?
}

void InstructionAffectation::afficher() {
	cout << "Affectation ";
	this->identifiant->afficher();
}
