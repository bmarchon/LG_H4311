#include "DecVariable.h"

DecVariable::DecVariable(Identifier id) : Declaration(LV)
{
    this->constants.push_back(id);
}

vector<Identifier *> DecVariable::getVariables()
{
    return this->constants;
}

void DecVariable::addVariable(Identifier *id)
{
    this->constants.push_back(id);
}

void DecVariable::print()
{
    cout << "var ";
    for (int i = 0; i < this->constants.size() - 1; i++)
    {
         this->constants[i]->getName() + ", ";
    }
    cout << this->constants[i]->getName() + ";";
}
