#ifndef SYMBOLE_H
#define SYMBOLE_H


#include <string>

using namespace std;

typedef enum {P, D, I,EXPR,LV, LC,F, T,A,M, VAR, CONST,VAL, ECRIRE, LIRE, ID, END, PF, PLUS, MOINS, FOIS, DIVISE, PV, PO, EG, V, AFFECT} Symboles;

static const string types[] = {
        "P", "D", "I", "EXPR","LV","LC","F", "T","A","M", "VAR", "CONST","VAL", "ECRIRE", "LIRE", "ID", "END", "PF", "PLUS", "MOINS", "FOIS", "DIVISE", "PV", "PO", "EG", "V", "AFFECT"

		}; 

class Symbole
{
	public:
        Symbole(Symboles type);
        virtual ~Symbole();
        //void print();
        //Symbole::Type getType();
        //operator int() const { return ident;}
        Symboles getType();
        virtual string afficherType();

	protected:
        Symboles type;

    private:
    	   
};

#endif // SYMBOLE_H
