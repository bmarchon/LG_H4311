#ifndef DECVARIABLE_H
#define DECVARIABLE_H
#include "Declaration.h"
#include "Symbole.h"
#include "ListeVariables.h"
class DecVariable : public Declaration
{
	public:
        DecVariable(ListeVariables *lv);
        virtual ~DecVariable();
	protected:
        ListeVariables *listeVariables;
	private:
};

#endif // DECVARIABLE_H
