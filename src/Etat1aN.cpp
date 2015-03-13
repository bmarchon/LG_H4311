#include "Etat1aN.h"

Etat0::Etat0(string n)
{
	nom = n;
}

Etat0::transition(Automate &automate, Symbole *s)
{
	switch (*s)
	{
		case VAR:
			automate.reduction(0);
			break;
		case CONST:
			automate.reduction(0);
			break;
		case ECRIRE:
			automate.reduction(0);
			break;
		case LIRE:
			automate.reduction(0);
			break;
		case ID:
			automate.reduction(0);
			break;
		case END:
			return true;
	}
	return false;
}

Etat0::~Etat0()
{
	//dtor
}
//---------------------------------------------
Etat1::Etat1()
{
	switch (*s)
	{
		case VAR:
			automate.decalage(s, new Etat1);
			break;
		case CONST:
			automate.decalage(s, new Etat);
			break;
		case ECRIRE:
			automate.reduction(0);
			break;
		case LIRE:
			automate.reduction(0);
			break;
		case ID:
			automate.reduction(0);
			break;
		case END:
			return true;
	}
	return false;
}

Etat1::~Etat1()
{
	//dtor
}
//---------------------------------------------
Etat2::Etat2()
{
	//ctor
}

Etat2::~Etat2()
{
	//dtor
}
//---------------------------------------------
Etat3::Etat3()
{
	//ctor
}

Etat3::~Etat3()
{
	//dtor
}
//---------------------------------------------
Etat4::Etat4()
{
	//ctor
}

Etat4::~Etat4()
{
	//dtor
}
//---------------------------------------------
Etat5::Etat5()
{
	//ctor
}

Etat5::~Etat5()
{
	//dtor
}
//---------------------------------------------
Etat6::Etat6()
{
	//ctor
}

Etat6::~Etat6()
{
	//dtor
}
//---------------------------------------------
Etat6::Etat6()
{
	//ctor
}

Etat6::~Etat6()
{
	//dtor
}
//---------------------------------------------
Etat7::Etat7()
{
	//ctor
}

Etat7::~Etat7()
{
	//dtor
}
//---------------------------------------------
Etat8::Etat8()
{
	//ctor
}

Etat8::~Etat8()
{
	//dtor
}
//---------------------------------------------
Etat9::Etat9()
{
	//ctor
}

Etat9::~Etat9()
{
	//dtor
}
//---------------------------------------------
Etat10::Etat10()
{
	//ctor
}

Etat10::~Etat10()
{
	//dtor
}
//---------------------------------------------
Etat11::Etat11()
{
	//ctor
}

Etat11::~Etat11()
{
	//dtor
}
//---------------------------------------------
Etat12::Etat12()
{
	//ctor
}

Etat12::~Etat12()
{
	//dtor
}
//---------------------------------------------
Etat13::Etat13()
{
	//ctor
}

Etat13::~Etat13()
{
	//dtor
}//---------------------------------------------
Etat14::Etat14()
{
	//ctor
}

Etat14::~Etat14()
{
	//dtor
}
//---------------------------------------------
Etat15::Etat15()
{
	//ctor
}

Etat15::~Etat15()
{
	//dtor
}
//---------------------------------------------
Etat16::Etat16()
{
	//ctor
}

Etat16::~Etat16()
{
	//dtor
}
//---------------------------------------------
Etat17::Etat17()
{
	//ctor
}

Etat17::~Etat17()
{
	//dtor
}
//---------------------------------------------
Etat18::Etat18()
{
	//ctor
}

Etat18::~Etat18()
{
	//dtor
}
//---------------------------------------------
Etat19::Etat19()
{
	//ctor
}

Etat19::~Etat19()
{
	//dtor
}
//---------------------------------------------
Etat20::Etat20()
{
	//ctor
}

Etat20::~Etat20()
{
	//dtor
}
//---------------------------------------------
Etat20::Etat20()
{
	//ctor
}

Etat20::~Etat20()
{
	//dtor
}
//---------------------------------------------
Etat21::Etat21()
{
	//ctor
}

Etat21::~Etat21()
{
	//dtor
}
//---------------------------------------------
Etat22::Etat22()
{
	//ctor
}

Etat22::~Etat22()
{
	//dtor
}
//---------------------------------------------
Etat23::Etat23()
{
	//ctor
}

Etat23::~Etat23()
{
	//dtor
}
//---------------------------------------------
Etat24::Etat24()
{
	//ctor
}

Etat24::~Etat24()
{
	//dtor
}
//---------------------------------------------
Etat25::Etat25()
{
	//ctor
}

Etat25::~Etat25()
{
	//dtor
}
//---------------------------------------------
Etat26::Etat26()
{
	//ctor
}

Etat26::~Etat26()
{
	//dtor
}
//---------------------------------------------
Etat27::Etat27()
{
	//ctor
}

Etat27::~Etat27()
{
	//dtor
}
//---------------------------------------------
Etat28::Etat28()
{
	//ctor
}

Etat28::~Etat28()
{
	//dtor
}
//---------------------------------------------
Etat29::Etat29()
{
	//ctor
}

Etat29::~Etat29()
{
	//dtor
}
//---------------------------------------------
Etat30::Etat30()
{
	//ctor
}

Etat30::~Etat30()
{
	//dtor
}
//---------------------------------------------
Etat31::Etat31()
{
	//ctor
}

Etat31::~Etat31()
{
	//dtor
}
//---------------------------------------------
Etat32::Etat32()
{
	//ctor
}

Etat32::~Etat32()
{
	//dtor
}
//---------------------------------------------
Etat33::Etat33()
{
	//ctor
}

Etat33::~Etat33()
{
	//dtor
}
//---------------------------------------------
Etat34::Etat34()
{
	//ctor
}

Etat34::~Etat34()
{
	//dtor
}
//---------------------------------------------
Etat35::Etat35()
{
	//ctor
}

Etat35::~Etat35()
{
	//dtor
}
//---------------------------------------------
Etat36::Etat36()
{
	//ctor
}

Etat36::~Etat36()
{
	//dtor
}
//---------------------------------------------
Etat37::Etat37()
{
	//ctor
}

Etat37::~Etat37()
{
	//dtor
}
//---------------------------------------------
Etat38::Etat38()
{
	//ctor
}

Etat38::~Etat38()
{
	//dtor
}
//---------------------------------------------
Etat39::Etat39()
{
	//ctor
}

Etat39::~Etat39()
{
	//dtor
}
//---------------------------------------------
Etat40::Etat40()
{
	//ctor
}

Etat40::~Etat40()
{
	//dtor
}
//---------------------------------------------
Etat41::Etat41()
{
	//ctor
}

Etat41::~Etat41()
{
	//dtor
}
//---------------------------------------------
Etat42::Etat42()
{
	//ctor
}

Etat42::~Etat42()
{
	//dtor
}
//---------------------------------------------
Etat43::Etat43()
{
	//ctor
}

Etat43::~Etat43()
{
	//dtor
}
//---------------------------------------------
Etat44::Etat44()
{
	//ctor
}

Etat44::~Etat44()
{
	//dtor
}
