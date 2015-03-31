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
#include "DecConstante.h"

using namespace std;

class Transformation
{
	public:
		static void transformer(Programme &programme);
	protected:
	private:
		static Expression * searchTransformations(Expression * exp);
		static Expression * simplifier(Expression * exp);
		static map<string,double> constantes;
		static vector<string> idFound;
		static bool isOnlyID;
};

#endif // TRANSFORMATION_H
