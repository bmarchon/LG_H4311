#ifndef SYMBOLE_H
#define SYMBOLE_H


class Symbole
{
	public:
        enum Type{P, D, I, VAR, CONST,VAL, ECRIRE, LIRE, ID, END, PF, PLUS, MOINS, FOIS, DIVISE, PV, PO, EG, V};

        Symbole(int id) : ident(id){}
        virtual ~Symbole(){}
        void print();
        Symbole::Type getType();
        operator int() const { return ident;}
	protected:

        Symbole::Type type;
        int ident;

	private:
};

#endif // SYMBOLE_H
