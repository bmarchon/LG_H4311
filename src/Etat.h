#ifndef ETAT_H
#define ETAT_H


class Etat
{
	public:
		Etat(string nom);
		virtual ~Etat();
		void print() const;
		virtual bool transition(Automate & automate, Symbole * s) = 0;
	protected:
		string name;
	private:
};

#endif // ETAT_H
