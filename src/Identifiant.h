#ifndef IDENTIFIANT_H
#define IDENTIFIANT_H

#include <string>
#include "Expression.h"
#include "Val.h"
#include <map>
#include <iostream>

using namespace std;

class Identifiant : public Expression
{
	public:
	Identifiant(string idVal);
    Identifiant(Symboles type, Identifiant *ident);


	virtual ~Identifiant();
	string valeur();
    void setValeurNum(double valeur);
    void setValeurNum(Val * valeur);
    Val *getValeurNum();
    double eval();
    void afficher(); // Display the value for the representation
    bool *isInitialized();
	protected:
	private:
    string idVal;
    Val * valNum;
    // could be done smarter?
    bool * isInit = new bool(false);
};

#endif // IDENTIFIANT_H
