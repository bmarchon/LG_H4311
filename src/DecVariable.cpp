#include "DecVariable.h"


DecVariable::DecVariable(ListeVariables *lv):Declaration(lv)
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
