#include "OperateurMultiplicatif.h"



OperateurMultiplicatif::~OperateurMultiplicatif()
{

}

void OperateurMultiplicatif::afficher()
{
	//string tmp = string(this->operateur);
	//cout << tmp << end;
    cout << operateur;
}

char OperateurMultiplicatif::getChar()
{
    return operateur;
}
