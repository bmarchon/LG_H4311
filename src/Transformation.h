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
		Transformation(Programme * prog);
		virtual ~Transformation();
		void transformer();
		Programme * getProgramme();
		
	protected:
		Programme * programme;
		Expression * simplifier(Expression* exp);
		bool is0Const(Expression * exp);
		bool is1Const(Expression * exp);

	private:
};

#endif // TRANSFORMATION_H
