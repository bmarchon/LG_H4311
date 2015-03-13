#include "Etat1aN.h"

Etat0::Etat0(string n)
{
	nom = n;
}

bool Etat0::transition(Automate &automate, Symbole *s)
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
Etat1::Etat1(string n)
{
	nom = n;
}

Etat1::~Etat1()
{
	//dtor
}

bool Etat1::transition(Automate &automate, Symbole *s)
{
	switch (*s)
	{
		case VAR:
			automate.decalage(s, new Etat4("etat4"));
			break;
		case CONST:
			automate.decalage(s, new Etat3("etat3"));
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
//---------------------------------------------
Etat2::Etat2(string n)
{
	//ctor
}

Etat2::~Etat2()
{
	//dtor
}
//---------------------------------------------
Etat3::Etat3(string n)
{
	//ctor
}

Etat3::~Etat3()
{
	//dtor
}
//---------------------------------------------
Etat4::Etat4(string n)
{
	//ctor
}

Etat4::~Etat4()
{
	//dtor
}
//---------------------------------------------
Etat5::Etat5(string n)
{
	//ctor
}

Etat5::~Etat5()
{
	//dtor
}
//---------------------------------------------
Etat6::Etat6(string n)
{
	//ctor
}

Etat6::~Etat6()
{
	//dtor
}
//---------------------------------------------
Etat7::Etat7(string n)
{
	//ctor
}

Etat7::~Etat7()
{
	//dtor
}
//---------------------------------------------
Etat8::Etat8(string n)
{
	//ctor
}

Etat8::~Etat8()
{
	//dtor
}
//---------------------------------------------
Etat9::Etat9(string n)
{
	//ctor
}

Etat9::~Etat9()
{
	//dtor
}
//---------------------------------------------
Etat10::Etat10(string n)
{
	//ctor
}

Etat10::~Etat10()
{
	//dtor
}
//---------------------------------------------
Etat11::Etat11(string n)
{
	//ctor
}

Etat11::~Etat11()
{
	//dtor
}
//---------------------------------------------
Etat12::Etat12(string n)
{
	//ctor
}

Etat12::~Etat12()
{
	//dtor
}
//---------------------------------------------
Etat13::Etat13(string n)
{
	//ctor
}

Etat13::~Etat13()
{
	//dtor
}//---------------------------------------------
Etat14::Etat14(string n)
{
	//ctor
}

Etat14::~Etat14()
{
	//dtor
}
//---------------------------------------------
Etat15::Etat15(string n)
{
	//ctor
}

Etat15::~Etat15()
{
	//dtor
}
//---------------------------------------------
Etat16::Etat16(string n)
{
	//ctor
}

Etat16::~Etat16()
{
	//dtor
}
//---------------------------------------------
Etat17::Etat17(string n)
{
	//ctor
}

Etat17::~Etat17()
{
	//dtor
}
//---------------------------------------------
Etat18::Etat18(string n)
{
	//ctor
}

Etat18::~Etat18()
{
	//dtor
}
//---------------------------------------------
Etat19::Etat19(string n)
{
	//ctor
}

Etat19::~Etat19()
{
	//dtor
}
//---------------------------------------------
Etat20::Etat20(string n)
{
	//ctor
}

Etat20::~Etat20()
{
	//dtor
}
//---------------------------------------------
Etat21::Etat21(string n)
{
	//ctor
}

Etat21::~Etat21()
{
	//dtor
}
//---------------------------------------------
Etat22::Etat22(string n)
{
	//ctor
}

Etat22::~Etat22()
{
	//dtor
}
//---------------------------------------------
Etat23::Etat23(string n)
{
	//ctor
}

Etat23::~Etat23()
{
	//dtor
}
//---------------------------------------------
Etat24::Etat24(string n)
{
	//ctor
}

Etat24::~Etat24()
{
	//dtor
}
//---------------------------------------------
Etat25::Etat25(string n)
{
	//ctor
}

Etat25::~Etat25()
{
	//dtor
}
//---------------------------------------------
Etat26::Etat26(string n)
{
	//ctor
}

Etat26::~Etat26()
{
	//dtor
}
//---------------------------------------------
Etat27::Etat27(string n)
{
	//ctor
}

Etat27::~Etat27()
{
	//dtor
}
//---------------------------------------------
Etat28::Etat28(string n)
{
	//ctor
}

Etat28::~Etat28()
{
	//dtor
}
//---------------------------------------------
Etat29::Etat29(string n)
{
	//ctor
}

Etat29::~Etat29()
{
	//dtor
}
//---------------------------------------------
Etat30::Etat30(string n)
{
	//ctor
}

Etat30::~Etat30()
{
	//dtor
}
//---------------------------------------------
Etat31::Etat31(string n)
{
	//ctor
}

Etat31::~Etat31()
{
	//dtor
}
//---------------------------------------------
Etat32::Etat32(string n)
{
	//ctor
}

Etat32::~Etat32()
{
	//dtor
}
//---------------------------------------------
Etat33::Etat33(string n)
{
	//ctor
}

Etat33::~Etat33()
{
	//dtor
}
//---------------------------------------------
Etat34::Etat34(string n)
{
	//ctor
}

Etat34::~Etat34()
{
	//dtor
}
//---------------------------------------------
Etat35::Etat35(string n)
{
	//ctor
}

Etat35::~Etat35()
{
	//dtor
}
//---------------------------------------------
Etat36::Etat36(string n)
{
	//ctor
}

Etat36::~Etat36()
{
	//dtor
}
//---------------------------------------------
Etat37::Etat37(string n)
{
	//ctor
}

Etat37::~Etat37()
{
	//dtor
}
//---------------------------------------------
Etat38::Etat38(string n)
{
	//ctor
}

Etat38::~Etat38()
{
	//dtor
}
//---------------------------------------------
Etat39::Etat39(string n)
{
	//ctor
}

Etat39::~Etat39()
{
	//dtor
}
//---------------------------------------------
Etat40::Etat40(string n)
{
	//ctor
}

Etat40::~Etat40()
{
	//dtor
}
//---------------------------------------------
Etat41::Etat41(string n)
{
	//ctor
}

Etat41::~Etat41()
{
	//dtor
}
//---------------------------------------------
Etat42::Etat42(string n)
{
	//ctor
}

Etat42::~Etat42()
{
	//dtor
}
//---------------------------------------------
Etat43::Etat43(string n)
{
	//ctor
}

Etat43::~Etat43()
{
	//dtor
}
//---------------------------------------------
Etat44::Etat44(string ns)
{
	//ctor
}

Etat44::~Etat44()
{
	//dtor
}
