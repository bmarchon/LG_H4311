#include "Etat.h"

Etat::Etat(int nombreEtat)
{
    this->nombreEtat = nombreEtat;
}

int Etat::getNombreEtat()
{
	return nombreEtat;
}

Etat::~Etat()
{
	//dtor
}

bool Etat::transition(Automate & automate, Symbole * s)
{
	//return false;
}
