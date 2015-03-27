#include "OperateurAdditif.h"

OperateurAdditif::~OperateurAdditif()
{

}

char OperateurAdditif::getChar()
{
	return operateur;
}

void OperateurAdditif::afficher()
{
	/*string tmp = string(this->operateur);
	cout << tmp << end;
*/
	stringstream ss;
	string s;
	ss << this->operateur;
	ss >> s;
	cout << s << endl;
}
