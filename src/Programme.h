#ifndef PROGRAMME_H
#define PROGRAMME_H

#include "Symbole.h"

class Programme : public Symbole
{
	public:
        Programme();
        Programme(Symbole *dec, Symbole *instr);
		virtual ~Programme();

	protected:
        Symbole *declarations;
        Symbole *instructions;

	private:
};

#endif // PROGRAMME_H
