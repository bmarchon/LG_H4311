#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

/*#include "Program.h"
#include "Instruction.h"
#include "InstructionAffectation.h"
#include "InstructionEcriture.h"
#include "Expression.h"
#include "ExprBinaire.h"
#include "ExprPar.h"
#include "ExprAdd.h"
#include "ExprMult.h"
#include "Declaration.h"
#include "DecConstant.h"
#include "Identifier.h"*/

#include "Program.h"
#include "InstructionAffectation.h"
#include "InstructionEcriture.h"
#include "Expression.h"
#include "ExprBinaire.h"
#include "ExprPar.h"
#include "ExprAdd.h"
#include "ExprMult.h"
#include "DecConstant.h"
#include "Operators.h"

#include <map>

using namespace std;

class Transformation
{
	public:
		static void transform(Program &program);
	protected:
	private:
		static Expression * searchTransformations(Expression * exp);
		static Expression * simplify(Expression * exp);
		static map<string,double> constants;
		static vector<string> idFound;
		static bool isOnlyID;
};

#endif // TRANSFORMATION_H
