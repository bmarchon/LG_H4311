#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#include "Programme.h"
#include "InstructionAffectation.h"
#include "InstructionEcriture.h"
#include "Expression.h"
#include "ExprBinaire.h"
#include "ExprPar.h"

using namespace std;


class Transformation
{
	public:
		Transformation(Programme * prog);
		virtual ~Transformation();
		void transformer();
		Programme * getProgramme();
		void anaExpr(Expression* lExpressionFille, Expression* lExpressionMere);
	protected:
		Programme * programme;
	private:
};

#endif // TRANSFORMATION_H
