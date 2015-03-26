#include "DecVariable.h"


DecVariable::DecVariable(ListeVariables *lv):Declaration(lv)
{
    listeVariables = lv;
}

DecVariable::~DecVariable()
{
	//dtor
}
