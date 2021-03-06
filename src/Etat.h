#ifndef ETAT_H
#define ETAT_H
#include <string>

#include "Symbole.h"
using namespace std;
class Automate;

class Etat
{
	public:
        Etat();
        Etat(int num);
        int getNombreEtat();
		virtual ~Etat();
		void print() const;
		virtual bool transition(Automate & automate, Symbole * s) = 0;
	protected:
        int num;
	private:
};

#endif // ETAT_H
