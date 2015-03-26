#ifndef PROGRAMME_H
#define PROGRAMME_H

#include "Symbole.h"
#include "iostream"

using namespace std;

class Programme : public Symbole
{
	public:
        Programme();
        Programme(Symbole *dec, Symbole *instr);
		virtual ~Programme();
    	void afficher(); // Display the value for the representation
	protected:
        Symbole *declarations;
        Symbole *instructions;

	private:
};

#endif // PROGRAMME_H
