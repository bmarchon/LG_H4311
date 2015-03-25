#ifndef IDENTIFIANT_H
#define IDENTIFIANT_H

#include <string>
#include "Expression.h"
#include "Val.h"
#include <map>
using namespace std;

class Identifiant : public Expression
{
	public:
	Identifiant(string idVal);
    Identifiant(Symboles type, Identifiant *ident);


	virtual ~Identifiant();
	string valeur();
    void setValeurNum(Val *valNum);
    Val *getValeurNum();
    double eval();

	protected:
	private:
	string idVal;
    Val *valNum;
};

#endif // IDENTIFIANT_H
