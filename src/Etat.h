#ifndef ETAT_H
#define ETAT_H
#include <string>

#include "Symbole.h"
using namespace std;
class Automate;

class Etat
{
	public:
		Etat(int nombreEtat);
		int getNombreEtat(); 
		virtual ~Etat();
		void print() const;
		virtual bool transition(Automate & automate, Symbole * s) = 0;
	protected:
		
	private:
		int nombreEtat;
};

#endif // ETAT_H
