#ifndef EXPRADD_H
#define EXPRADD_H
#include "ExprBinaire.h"
#include "OperateurAdditif.h"
class ExprAdd : public ExprBinaire
{
	public:
        ExprAdd(Expression *exprGauche, OperateurAdditif *opAdd, Expression *exprDroite);
		virtual ~ExprAdd();
        double eval(const map<string, double> &valeurs);

	protected:
	private:
        OperateurAdditif *opAdditif;
};

#endif // EXPRADD_H
