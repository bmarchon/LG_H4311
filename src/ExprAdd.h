#ifndef EXPRADD_H
#define EXPRADD_H
#include "ExprBinaire.h"

class ExprAdd : public ExprBinaire
{
	public:
        ExprAdd(): ExprBinaire(EXPR){}
		virtual ~ExprAdd();
		double eval();
	protected:
	private:
};

#endif // EXPRADD_H
