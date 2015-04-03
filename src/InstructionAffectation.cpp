#include "InstructionAffectation.h"

InstructionAffectation::InstructionAffectation(Identifier *id, Expression *expr) : Instruction(AFF)
{
    this->identifier = id;
    this->expression = expr;
}

void InstructionAffectation::execute()
{
	this->identifier->setValue(expression->eval());
	// TODO delete previous expression?
}

void InstructionAffectation::print() {

    this->identifier->print();
    cout << " := ";
    this->expression->print();
    cout << ";" << endl;

}
Expressions InstructionAffectation::getExpressionType()
{
	return this->expression->getExpressionType();
}


Expression * InstructionAffectation::getExpression()
{
	return this->expression;
}

void InstructionAffectation::setExpression(Expression* exp)
{
    this->expression = exp;
}

Identifier * InstructionAffectation::getIdentifier()
{
    return this->identifier;
}
