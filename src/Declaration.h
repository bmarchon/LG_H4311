#ifndef DECLARATION_H
#define DECLARATION_H
#include "Symbole.h"

class Declaration : public Symbole
{
	public:
        Declaration(): Symbole(D){}
		virtual ~Declaration();
	protected:
	private:
};

#endif // DECLARATION_H
