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
		Symboles operateur;
};

#endif // EXPRMULT_H
