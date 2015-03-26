#include "InstructionEcriture.h"



InstructionEcriture::~InstructionEcriture()
{

}

void InstructionEcriture::executer()
{
	cout << expression->eval() << endl;
}

void InstructionEcriture::afficher() {
	cout << "Ecrire ";
	this->expression->afficher();
}