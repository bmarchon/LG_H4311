#ifndef EXPRADD_H
#define EXPRADD_H
#include "ExprBinaire.h"
#include "OpreateurAdditif.h"
class ExprAdd : public ExprBinaire
{
	public:
        ExprAdd(Symbole *exprGauche, Symbole *opAdd, Symbole *exprDroite);
		virtual ~ExprAdd();
        double eval(const map<string, double> &valeurs);

	protected:
	private:
        Symbole *opAdditif;
};

#endif // EXPRADD_H
