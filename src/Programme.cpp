#include "Programme.h"



Programme::Programme(Symbole *dec, Symbole *instr):Symbole(I)
{

    declarations = dec;
    instructions = instr;
}

Programme::~Programme()
{
	//dtor
}
