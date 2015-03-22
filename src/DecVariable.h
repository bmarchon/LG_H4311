#ifndef DECVARIABLE_H
#define DECVARIABLE_H
#include "Declaration.h"
#include "Symbole.h"
#include "ListeVariables.h"
class DecVariable : public Declaration
{
	public:
        DecVariable();
        virtual ~DecVariable();
	protected:
        ListeVariables *lv;
	private:
};

#endif // DECVARIABLE_H
