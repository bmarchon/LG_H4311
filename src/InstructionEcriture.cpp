#include "InstructionEcriture.h"



InstructionEcriture::~InstructionEcriture()
{

}

void InstructionEcriture::executer(map<string, double> &valeurs)
{
	cout << expression->eval(valeurs) << endl;
}

