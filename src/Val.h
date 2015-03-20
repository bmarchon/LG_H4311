#ifndef VAL_H
#define VAL_H

#include "Expression.h"

using namespace std;

class Val : public Expression
{
	public:
	Val(double valeur);
	virtual ~Val();
	double eval();

	protected:
	private:
	double doubleVal;
};

#endif // VAL_H
