#include "OperateurMultiplicatif.h"



OperateurMultiplicatif::~OperateurMultiplicatif()
{

}

char OperateurMultiplicatif::getChar()
{
	return operateur;
}
void OperateurMultiplicatif::afficher()
{
	//string tmp = string(this->operateur);
	//cout << tmp << end;
    cout << operateur;
}
