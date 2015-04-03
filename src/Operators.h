#ifndef OPERATORS_H
#define OPERATORS_H

#include "Operator.h"

#include <iostream>

class AddOperator : public Operator
{
    public:
        AddOperator(char op) : Operator(A, op) {}
        ~AddOperator() {}
        void print(); // Display the value for the representation
};

//----------------------------------------------------------------

class MultOperator : public Operator
{
    public:
        MultOperator(char op) : Operator(M, op) {}
        ~MultOperator() {}
        void print(); // Display the value for the representation
};

#endif // OPERATORS_H
