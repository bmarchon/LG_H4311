#ifndef EXPRMULT_H
#define EXPRMULT_H
#include "ExprBinaire.h"

class ExprMult : public ExprBinaire
{
	public:
        ExprMult(): ExprBinaire(EXPR){}
		virtual ~ExprMult();
		double eval();
	protected:
	private:
};

#endif // EXPRMULT_H
