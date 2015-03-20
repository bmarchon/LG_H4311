#ifndef IDENTIFIANT_H
#define IDENTIFIANT_H

#include <string>
#include "Expression.h"

using namespace std;

class Identifiant : public Expression
{
	public:
	Identifiant(string idVal);
	virtual ~Identifiant();
	string valeur();
	double eval();

	protected:
	private:
	string idVal;
};

#endif // IDENTIFIANT_H
