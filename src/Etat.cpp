#include "Etat.h"
#include <iostream>
using namespace std;

Etat::Etat()
{
    //ctor
}

Etat::Etat(int num)
{
    this->num = num;
}



Etat::~Etat()
{
	//dtor
}

bool Etat::transition(Automate & automate, Symbole * s)
{
	//return false;
}

void Etat::print() const
{
    cout << num << endl;
}
