#ifndef EXPRADD_H
#define EXPRADD_H

#include "ExprBinaire.h"
#include "Operator.h"

#include <string>

using namespace std;

class ExprAdd : public ExprBinaire
{
    public:
        ExprAdd(Expression *exprLeft, Operator *opAdd, Expression *exprRight) : ExprBinaire(EXPR, exprLeft, opAdd, exprRight) {}
        virtual ~ExprAdd() {}
        double eval();
        void print(); // Display the value for the representation
};

#endif // EXPRADD_H
