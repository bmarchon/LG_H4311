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
//fonction de transition
bool Etat11::transition(Automate &automate, Symbole *s)
{
	switch (*s)
	{
		case PF: //r13
			automate.reduction(3, E);
			break;
		case PLUS: //r13
			automate.reduction(3, E);
			break;
		case MOINS: //r13
			automate.reduction(3, E);
			break;
		case FOIS: //d22
			automate.decalage(s, new Etat22);
			break;
		case DIVISE: //d23
			automate.decalage(s, new Etat23);
			break;
		case PV: //r13
			automate.reduction(3, E);
			break;
	}
	return false;
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
//fonction de transition
bool Etat12::transition(Automate &automate, Symbole *s)
{
	switch (*s)
	{
		case VAR: //r16
			automate.reduction(1, T);
			break;
		case CONST: //r16
			automate.reduction(1, T);
			break;
		case ECRIRE: //r16
			automate.reduction(1, T);
			break;
		case LIRE: //r16
			automate.reduction(1, T);
			break;
		case AFFECT: //r16
			automate.reduction(1, T);
			break;
		case VAL: //r16
			automate.reduction(1, T);
			break;
		case ID: //r16
			automate.reduction(1, T);
			break;
		case PO: //r16
			automate.reduction(1, T);
			break;
		case PF: //r16
			automate.reduction(1, T);
			break;
		case PLUS: //r16
			automate.reduction(1, T);
			break;
		case MOINS: //r16
			automate.reduction(1, T);
			break;
		case FOIS: //r16
			automate.reduction(1, T);
			break;
		case DIVISE: //r16
			automate.reduction(1, T);
			break;
		case EG: //r16
			automate.reduction(1, T);
			break;
		case V: //r16
			automate.reduction(1, T);
			break;
		case PV: //r16
			automate.reduction(1, T);
			break;
		case END: //r16
			automate.reduction(1, T);
			break;
	}
	return false;
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
//fonction de transition
bool Etat13::transition(Automate &automate, Symbole *s)
{
	switch (*s)
	{
		case VAR: //r17
			automate.reduction(1, F);
			break;
		case CONST: //r17
			automate.reduction(1, F);
			break;
		case ECRIRE: //r17
			automate.reduction(1, F);
			break;
		case LIRE: //r17
			automate.reduction(1, F);
			break;
		case AFFECT: //r17
			automate.reduction(1, F);
			break;
		case VAL: //r17
			automate.reduction(1, F);
			break;
		case ID: //r17
			automate.reduction(1, F);
			break;
		case PO: //r17
			automate.reduction(1, F);
			break;
		case PF: //r17
			automate.reduction(1, F);
			break;
		case PLUS: //r17
			automate.reduction(1, F);
			break;
		case MOINS: //r17
			automate.reduction(1, F);
			break;
		case FOIS: //r17
			automate.reduction(1, F);
			break;
		case DIVISE: //r17
			automate.reduction(1, F);
			break;
		case EG: //r17
			automate.reduction(1, F);
			break;
		case V: //r17
			automate.reduction(1, F);
			break;
		case PV: //r17
			automate.reduction(1, F);
			break;
		case END: //r17
			automate.reduction(1, F);
			break;
	}
	return false;
}
Etat13::~Etat13()
{
	//dtor
}//---------------------------------------------
Etat14::Etat14(string n)
{
	//ctor
}
//fonction de transition
bool Etat14::transition(Automate &automate, Symbole *s)
{
	switch (*s)
	{
		case VAR: //r18
			automate.reduction(1, F);
			break;
		case CONST: //r18
			automate.reduction(1, F);
			break;
		case ECRIRE: //r18
			automate.reduction(1, F);
			break;
		case LIRE: //r18
			automate.reduction(1, F);
			break;
		case AFFECT: //r18
			automate.reduction(1, F);
			break;
		case VAL: //r18
			automate.reduction(1, F);
			break;
		case ID: //r18
			automate.reduction(1, F);
			break;
		case PO: //r18
			automate.reduction(1, F);
			break;
		case PF: //r18
			automate.reduction(1, F);
			break;
		case PLUS: //r18
			automate.reduction(1, F);
			break;
		case MOINS: //r18
			automate.reduction(1, F);
			break;
		case FOIS: //r18
			automate.reduction(1, F);
			break;
		case DIVISE: //r18
			automate.reduction(1, F);
			break;
		case EG: //r18
			automate.reduction(1, F);
			break;
		case V: //r18
			automate.reduction(1, F);
			break;
		case PV: //r18
			automate.reduction(1, F);
			break;
		case END: //r18
			automate.reduction(1, F);
			break;
	}
	return false;
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
//fonction de transition
bool Etat15::transition(Automate &automate, Symbole *s)
{
	switch (*s)
	{
		case VAL: //d14
			automate.decalage(s, new Etat14)
			break;
		case ID: //d13
			automate.decalage(s, new Etat13);
			break;
		case PO: //d15
			automate.decalage(s, new Etat15);
			break;
	}
	return false;
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
//fonction de transition
bool Etat16::transition(Automate &automate, Symbole *s)
{
	switch (*s)
	{
		case PF: //d17
			automate.decalage(s, new Etat17);
			break;
		case PLUS: //d18
			automate.decalage(s, new Etat18);
			break;
		case MOINS: //d15
			automate.decalage(s, new Etat15);
			break;
	}
	return false;
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
//fonction de transition
bool Etat17::transition(Automate &automate, Symbole *s)
{
	switch (*s)
	{
		case VAR: //r19
			automate.reduction(3, F);
			break;
		case CONST: //r19
			automate.reduction(3, F);
			break;
		case ECRIRE: //r19
			automate.reduction(3, F);
			break;
		case LIRE: //r19
			automate.reduction(3, F);
			break;
		case AFFECT: //r19
			automate.reduction(3, F);
			break;
		case VAL: //r19
			automate.reduction(3, F);
			break;
		case ID: //r19
			automate.reduction(3, F);
			break;
		case PO: //r19
			automate.reduction(3, F);
			break;
		case PF: //r19
			automate.reduction(3, F);
			break;
		case PLUS: //r19
			automate.reduction(3, F);
			break;
		case MOINS: //r19
			automate.reduction(3, F);
			break;
		case FOIS: //r19
			automate.reduction(3, F);
			break;
		case DIVISE: //r19
			automate.reduction(3, F);
			break;
		case EG: //r19
			automate.reduction(3, F);
			break;
		case V: //r19
			automate.reduction(3, F);
			break;
		case PV: //r19
			automate.reduction(3, F);
			break;
		case END: //r19
			automate.reduction(3, F);
			break;
	}
	return false;
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
//fonction de transition
bool Etat18::transition(Automate &automate, Symbole *s)
{
	switch (*s)
	{
		case VAR: //r18
			automate.reduction(1, F);
			break;
		case CONST: //r18
			automate.reduction(1, F);
			break;
		case ECRIRE: //r18
			automate.reduction(1, F);
			break;
		case LIRE: //r18
			automate.reduction(1, F);
			break;
		case AFFECT: //r18
			automate.reduction(1, F);
			break;
		case VAL: //r18
			automate.reduction(1, F);
			break;
		case ID: //r18
			automate.reduction(1, F);
			break;
		case PO: //r18
			automate.reduction(1, F);
			break;
		case PF: //r18
			automate.reduction(1, F);
			break;
		case PLUS: //r18
			automate.reduction(1, F);
			break;
		case MOINS: //r18
			automate.reduction(1, F);
			break;
		case FOIS: //r18
			automate.reduction(1, F);
			break;
		case DIVISE: //r18
			automate.reduction(1, F);
			break;
		case EG: //r18
			automate.reduction(1, F);
			break;
		case V: //r18
			automate.reduction(1, F);
			break;
		case PV: //r18
			automate.reduction(1, F);
			break;
		case END: //r18
			automate.reduction(1, F);
			break;
	}
	return false;
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
//fonction de transition
bool Etat19::transition(Automate &automate, Symbole *s)
{
	switch (*s)
	{
		case PF: //r14
			automate.reduction(1, E);
			break;
		case PLUS: //r14
			automate.reduction(1, E);
			break;
		case MOINS: //r14
			automate.reduction(1, E);
			break;
		case FOIS: //d22
			automate.decalage(s, new Etat22);
			break;
		case DIVISE: //d23
			automate.decalage(s, new Etat23);
			break;
		case PV: //r14
			automate.reduction(1, E);
			break;
	}
	return false;
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
//fonction de transition
bool Etat20::transition(Automate &automate, Symbole *s)
{
	switch (*s)
	{
		case VAL: //d14
			automate.decalage(s, new Etat14);
			break;
		case ID: //d13
			automate.decalage(s, new Etat13);
			break;
		case PO: //d15
			automate.decalage(s, new Etat15);
			break;
	}
	return false;
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
