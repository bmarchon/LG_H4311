#ifndef AUTOMATE_H
#define AUTOMATE_H
#include <stack>
#include "Symbole.h"
using namespace std;
class Etat;
class Automate
{
	public:
		Automate();
        bool reduction(int nbEtat, Symbole *s);
        bool decalage(Symbole *s, Etat *etat);
        bool analyse();
		virtual ~Automate();
	protected:
        stack<Etat *> etats;
        stack<Symbole *> symboles;
	private:
};

#endif // AUTOMATE_H
