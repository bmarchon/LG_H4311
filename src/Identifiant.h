#ifndef IDENTIFIANT_H
#define IDENTIFIANT_H

#include <string>
#include "Symbole.h"

using namespace std;

class Identifiant : public Symbole
{
	public:
	Identifiant(string idVal);
	virtual ~Identifiant();
	string valeur();

	protected:
	private:
	string idVal;
};

#endif // IDENTIFIANT_H
