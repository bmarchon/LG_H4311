#ifndef ETAT_H
#define ETAT_H
#include <string>
#include "Automate.h"
#include "Symbole.h"
using namespace std;


class Etat
{
	protected:
		string nom;
	public:
		Etat();
		Etat(string nom);
		virtual ~Etat();
		void print() const;
		virtual bool transition(Automate & automate, Symbole * s) = 0;
	private:
};

#endif // ETAT_H
