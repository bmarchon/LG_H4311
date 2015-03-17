#ifndef SYMBOLE_H
#define SYMBOLE_H


#include <string>

using namespace std;

typedef enum {P, D, I, VAR, CONST,VAL, ECRIRE, LIRE, ID, END, PF, PLUS, MOINS, FOIS, DIVISE, PV, PO, EG, V} Symboles;

class Symbole
{
	public:
        

        Symbole(Symboles type);
        virtual ~Symbole();
        //void print();
        //Symbole::Type getType();
        //operator int() const { return ident;}
        Symboles getType();

	protected:
        //int ident;

	private:
        Symboles type;
};

#endif // SYMBOLE_H
