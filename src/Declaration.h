#ifndef DECLARATION_H
#define DECLARATION_H
#include "Symbole.h"

class Declaration : public Symbole
{
	public:
        Declaration(): Symbole(D){}
        Declaration(Symbole * s);
		virtual ~Declaration();
		Symbole * getContenu();
		void afficher(); // Display the value for the representation
	protected:
        //Declaration *declaration;
        Symbole * contenu;
	private:
};

#endif // DECLARATION_H
