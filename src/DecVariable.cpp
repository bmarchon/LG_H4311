#include "DecVariable.h"


DecVariable::DecVariable(ListeVariables *lv):Declaration()
{
    listeVariables = lv;
}

DecVariable::~DecVariable()
{
	//dtor
}

void DecVariable::afficher() {
	cout << "var ";
	this->listeVariables->afficher();
	cout << ";" << endl;
}
