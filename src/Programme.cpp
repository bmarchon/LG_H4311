#include "Programme.h"



Programme::Programme(Symbole *dec, Symbole *instr):Symbole(P)
{

    declarations = dec;
    instructions = instr;
}

Programme::~Programme()
{
	//dtor
}

void Programme::afficher() {
	cout << "Programme ";
	this->declarations->afficher();
	this->instructions->afficher();
}
