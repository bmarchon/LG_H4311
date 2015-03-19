#ifndef VAL_H
#define VAL_H

#include "Symbole.h"

using namespace std;

class Val : public Symbole
{
	public:
	Val(double valeur);
	virtual ~Val();
	double valeur();

	protected:
	private:
	double doubleVal;
};

#endif // VAL_H
