#ifndef SYMBOLE_H
#define SYMBOLE_H

typedef enum {P, D, I, VAR, CONST,VAL, ECRIRE, LIRE, ID, END, PF, PLUS, MOINS, FOIS, DIVISE, PV, PO, EG, V} Symboles;


class Symbole
{
	public:
        

        Symbole(int id) : ident(id){}
        virtual ~Symbole(){}
        void print();
        //Symbole::Type getType();
        operator int() const { return ident;}
	protected:

        //Symbole::Type type;
        int ident;

	private:
};

#endif // SYMBOLE_H
