#include "DecVariable.h"

DecVariable::DecVariable(Identifier *id) : Declaration(LV)
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
    for (int i = 0; i < this->constants.size(); i++)
    {
         cout << "var " << this->constants[i]->getName() << ";" << endl;
    }
}
