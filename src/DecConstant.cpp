#include "DecConstant.h"

DecConstant::DecConstant(Identifier *id) : Declaration(LC)
{
    this->constants.push_back(id);
}

vector<Identifier *> DecConstant::getConstants()
{
    return this->constants;
}

void DecConstant::addConstant(Identifier *id)
{
    this->constants.push_back(id);
}

void DecConstant::print()
{
    for (int i = 0; i < this->constants.size(); i++)
    {
         cout << "const " << this->constants[i]->getName() << " = " << this->constants[i]->eval() << ";" << endl;
    }
}
