#ifndef DECVARIABLE_H
#define DECVARIABLE_H

#include "Declaration.h"
#include "Identifier.h"
#include "Symbol.h"

using namespace std;

class DecVariable : public Declaration
{
    public:
        DecVariable(Identifier *id);
        virtual ~DecVariable() {}
        vector<Identifier *> getVariables();
        void addVariable(Identifier *id);
    protected:
        void print(); // Display the value for the representation
        vector<Identifier *> constants;
    private:
};

#endif // DECVARIABLE_H
