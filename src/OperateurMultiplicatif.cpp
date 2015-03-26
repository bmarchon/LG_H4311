#include "OperateurMultiplicatif.h"



OperateurMultiplicatif::~OperateurMultiplicatif()
{

}

void OperateurMultiplicatif::afficher()
{
	//string tmp = string(this->operateur);
	//cout << tmp << end;

	stringstream ss;
	string s;
	ss << this->operateur;
	ss >> s;
	cout << s << endl;
}