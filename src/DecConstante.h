#ifndef DECCONSTANTE_H
#define DECCONSTANTE_H
#include "Declaration.h"
#include "ListeConstantes.h"
class DecConstante : public Declaration
{
	public:
        DecConstante(ListeConstantes *lc);
		virtual ~DecConstante();
    	void afficher(); // Display the value for the representation
	protected:
        ListeConstantes *listeConstantes;
	private:
};

#endif // DECCONSTANTE_H
