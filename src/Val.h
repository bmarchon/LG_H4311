#ifndef VAL_H
#define VAL_H


#include "Expression.h"
using namespace std;

class Val : public Expression
{
	public:
    Val();
	Val(double valeur);
	virtual ~Val();
	double valeur();
    //Val& operator = (const Val &valeur);
    double eval(const map<string, double> &valeurs);

	protected:
	private:
	double doubleVal;
};

#endif // VAL_H
