#include "Declaration.h"

Declaration::Declaration(Symbole * s): Symbole(D)
{
	contenu = s;
}

Symbole * Declaration::getContenu()
{
	return contenu;
}

Declaration::~Declaration()
{
	//dtor
}

void Declaration::afficher()
{
	//nothing to do here
}
