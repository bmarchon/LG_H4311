#ifndef VAL_H
#define VAL_H


#include "Expression.h"
using namespace std;

class Val : public Expression
{
	public:
    	Val();
	Val(double valeur);
	Val(Symboles type, Val *v);
	virtual ~Val();
	//double valeur();
    //Val& operator = (const Val &valeur);
    double eval();
    void setValeur(double valeur);
    void afficher();
	protected:
	private:
	double doubleVal;
};

#endif // VAL_H
