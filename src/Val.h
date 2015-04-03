#ifndef VAL_H
#define VAL_H

#include "Expression.h"
#include "Symbol.h"

using namespace std;

class Val : public Expression
{
	public:
        Val() : Expression(VALEUR, VAL) {}
        Val(double valeur);
        Val(Symbols type, Val *v);
        virtual ~Val() {}
        void setValue(double value);
        double eval();
        void print();
    private:
        double value;
};

#endif // VAL_H
