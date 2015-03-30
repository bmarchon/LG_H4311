#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#include "Programme.h"
#include "InstructionAffectation.h"
#include "InstructionEcriture.h"
#include "Expression.h"
#include "ExprBinaire.h"
#include "ExprPar.h"
#include "ExprAdd.h"
#include "ExprMult.h"

using namespace std;

class Transformation
{
	public:
		static void transformer(Programme &programme);
	protected:
	private:
		static Expression * searchTransformations(Expression * exp);
		static Expression * simplifier(Expression * exp);
};

#endif // TRANSFORMATION_H
