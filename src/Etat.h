#ifndef ETAT_H
#define ETAT_H
#include <string>

#include "Symbole.h"
using namespace std;
class Automate;

class Etat
{
	protected:
        int num;
	public:
        Etat();
        Etat(int num);
        int getNombreEtat();
		virtual ~Etat();
		void print() const;
		virtual bool transition(Automate & automate, Symbole * s) = 0;
	private:
};

#endif // ETAT_H
