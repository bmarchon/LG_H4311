#ifndef DECLARATION_H
#define DECLARATION_H
#include "Symbole.h"

class Declaration : public Symbole
{
	public:
        Declaration(): Symbole(D){}
		virtual ~Declaration();
		void afficher(); // Display the value for the representation

	protected:
        Declaration *declaration;
	private:
};

#endif // DECLARATION_H
