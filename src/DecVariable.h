#ifndef DECVARIABLE_H
#define DECVARIABLE_H
#include "Declaration.h"
#include "Symbole.h"
#include "ListeVariables.h"
#include <iostream>

using namespace std;

class DecVariable : public Declaration
{
	public:
        DecVariable(ListeVariables *lv);
        virtual ~DecVariable();
    	void afficher(); // Display the value for the representation
	protected:
        ListeVariables *listeVariables;
	private:
};

#endif // DECVARIABLE_H
