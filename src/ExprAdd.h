#ifndef EXPRADD_H
#define EXPRADD_H

#include "ExprBinaire.h"

#include <string>

using namespace std;

//class ExprBinaire;

class ExprAdd : public ExprBinaire
{
    public:
        ExprAdd(Expression *exprLeft, AddOperator *opAdd, Expression *exprRight) : ExprBinaire(EXPR, exprLeft, opAdd, exprRight) {}
        virtual ~ExprAdd() {}
        double eval();
        void print(); // Display the value for the representation
};

#endif // EXPRADD_H
