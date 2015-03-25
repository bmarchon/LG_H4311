#include "InstructionAffectation.h"

InstructionAffectation::InstructionAffectation(Identifiant *id, Expression *expr):Instruction()
{
    identifiant = id;
    expression = expr;
}

InstructionAffectation::~InstructionAffectation()
{

}

