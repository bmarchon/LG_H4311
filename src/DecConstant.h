#ifndef DECCONSTANT_H
#define DECCONSTANT_H

#include "Declaration.h"
#include "Identifier.h"
#include "Symbol.h"

#include <vector>

class DecConstant : public Declaration
{
    public:
        DecConstant(Identifier *id);
        virtual ~DecConstant() {}
        vector<Identifier *> getConstants();
        void addConstant(Identifier *id);
    protected:
        void print(); // Display the value for the representation
        vector<Identifier *> constants;
    private:
};

#endif // DECCONSTANT_H
