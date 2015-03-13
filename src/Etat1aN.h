#ifndef ETAT1AN_H
#define ETAT1AN_H
#include "Etat.h"
#include "Automate.h"
#include "Symbole.h"
#include <string>

using namespace std;

class Etat0: public Etat
{
	public:
		Etat0(string nom);
		virtual ~Etat0();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat1: public Etat
{
	public:
		Etat1(string nom);
		virtual ~Etat1();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat2: public Etat
{
	public:
		Etat2(string nom);
		virtual ~Etat2();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat3: public Etat
{
	public:
		Etat3(string nom);
		virtual ~Etat3();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat4 : public Etat
{
	public:
		Etat4(string nom);
		virtual ~Etat4();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat5 : public Etat
{
	public:
		Etat5(string nom);
		virtual ~Etat5();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat6 : public Etat
{
	public:
		Etat6(string nom);
		virtual ~Etat6();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
	private:
};
//-------------------------------------------
class Etat7 : public Etat
{
	public:
		Etat7(string nom);
		virtual ~Etat7();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat8 : public Etat
{
	public:
		Etat8(string nom);
		virtual ~Etat8();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat9 : public Etat
{
	public:
		Etat9(string nom);
		virtual ~Etat9();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat10 : public Etat
{
	public:
		Etat10(string nom);
		virtual ~Etat10();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat11 : public Etat
{
	public:
		Etat11(string nom);
		virtual ~Etat11();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat12 : public Etat
{
	public:
<<<<<<< HEAD
		Etat12();
		bool Etat0::transition(Automate &automate, Symbole *s)
=======
		Etat12(string nom);
>>>>>>> origin/master
		virtual ~Etat12();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat13 : public Etat
{
	public:
<<<<<<< HEAD
		Etat13();
		bool Etat0::transition(Automate &automate, Symbole *s)
=======
		Etat13(string nom);
>>>>>>> origin/master
		virtual ~Etat13();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat14 : public Etat
{
	public:
		Etat14(string nom);
		virtual ~Etat14();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat15 : public Etat
{
	public:
		Etat15(string nom);
		virtual ~Etat15();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat16 : public Etat
{
	public:
		Etat16(string nom);
		virtual ~Etat16();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat17 : public Etat
{
	public:
		Etat17(string nom);
		virtual ~Etat17();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat18 : public Etat
{
	public:
		Etat18(string nom);
		virtual ~Etat18();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat19 : public Etat
{
	public:
		Etat19(string nom);
		virtual ~Etat19();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat20 : public Etat
{
	public:
		Etat20(string nom);
		virtual ~Etat20();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat21 : public Etat
{
	public:
		Etat21(string nom);
		virtual ~Etat21();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat22 : public Etat
{
	public:
		Etat22(string nom);
		virtual ~Etat22();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat23 : public Etat
{
	public:
		Etat23(string nom);
		virtual ~Etat23();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat24 : public Etat
{
	public:
		Etat24(string nom);
		virtual ~Etat24();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat25 : public Etat
{
	public:
		Etat25(string nom);
		virtual ~Etat25();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat26 : public Etat
{
	public:
		Etat26(string nom);
		virtual ~Etat26();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat27 : public Etat
{
	public:
		Etat27(string nom);
		virtual ~Etat27();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat28 : public Etat
{
	public:
		Etat28(string nom);
		virtual ~Etat28();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat29 : public Etat
{
	public:
		Etat29(string nom);
		virtual ~Etat29();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat30 : public Etat
{
	public:
		Etat30(string nom);
		virtual ~Etat30();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat31 : public Etat
{
	public:
		Etat31(string nom);
		virtual ~Etat31();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat32 : public Etat
{
	public:
		Etat32(string nom);
		virtual ~Etat32();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
	private:
};
//-------------------------------------------
class Etat33 : public Etat
{
	public:
		Etat33(string nom);
		virtual ~Etat33();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat34 : public Etat
{
	public:
		Etat34(string nom);
		virtual ~Etat34();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat35 : public Etat
{
	public:
		Etat35(string nom);
		virtual ~Etat35();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat36 : public Etat
{
	public:
		Etat36(string nom);
		virtual ~Etat36();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat37 : public Etat
{
	public:
		Etat37(string nom);
		virtual ~Etat37();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat38 : public Etat
{
	public:
		Etat38(string nom);
		virtual ~Etat38();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat39 : public Etat
{
	public:
		Etat39(string nom);
		virtual ~Etat39();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat40 : public Etat
{
	public:
		Etat40(string nom);
		virtual ~Etat40();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat41 : public Etat
{
	public:
		Etat41(string nom);
		virtual ~Etat41();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat42 : public Etat
{
	public:
		Etat42(string nom);
		virtual ~Etat42();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat43 : public Etat
{
	public:
		Etat43(string nom);
		virtual ~Etat43();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
class Etat44 : public Etat
{
	public:
		Etat44(string nom);
		virtual ~Etat44();
		bool transition(Automate & automate, Symbole * s);
		void print() const;
	protected:
		string nom;
	private:
};
//-------------------------------------------
#endif // ETAT1AN_H
