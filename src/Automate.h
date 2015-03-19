#ifndef AUTOMATE_H
#define AUTOMATE_H
#include <stack>
#include "Symbole.h"
#include "AnalyseurLexical.h"
using namespace std;
#include "Etat.h"
class Automate
{
	public:
        Automate();
        //Automate(AnalyseurLexical &aL): aLexical(aL){}
        bool reduction(int nbEtat, Symbole *s);
        bool decalage(Symbole *s, Etat *etat);
        bool analyse();
        AnalyseurLexical *getAnalyseurLexical();
		virtual ~Automate();
	protected:
        AnalyseurLexical *aLexical;
        stack<Etat *> etats;
        stack<Symbole *> symboles;
	private:
};

#endif // AUTOMATE_H
