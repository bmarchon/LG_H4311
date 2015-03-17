#include "Etat1aN.h"

Etat0::Etat0(string n)
{
	nom = n;
}

bool Etat0::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case Symbole::VAR:
            automate.reduction(0, s);
			break;
        case Symbole::CONST:
            automate.reduction(0, s);
			break;
        case Symbole::ECRIRE:
            automate.reduction(0, s);
			break;
        case Symbole::LIRE:
            automate.reduction(0, s);
			break;
        case Symbole::ID:
            automate.reduction(0, s);
			break;
        case Symbole::END:
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
    switch (s->getType())
	{
        case Symbole::VAR:
			automate.decalage(s, new Etat4("etat4"));
			break;
        case Symbole::CONST:
			automate.decalage(s, new Etat3("etat3"));
			break;
        case Symbole::ECRIRE:
            automate.reduction(0, s);
			break;
        case Symbole::LIRE:
            automate.reduction(0, s);
			break;
        case Symbole::ID:
            automate.reduction(0, s);
			break;
        case Symbole::END:
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
   /* switch (s->getType())
	{
        case Symbole::PF: //r13
            automate.reduction(3, E);
			break;
        case Symbole::PLUS: //r13
			automate.reduction(3, E);
			break;
        case Symbole::MOINS: //r13
			automate.reduction(3, E);
			break;
        case Symbole::FOIS: //d22
			automate.decalage(s, new Etat22);
			break;
        case Symbole::DIVISE: //d23
			automate.decalage(s, new Etat23);
			break;
        case Symbole::PV: //r13
			automate.reduction(3, E);
			break;
    }*/
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
   /* switch (s->getType())
	{
        case Symbole::VAR: //r16
            automate.reduction(1, T);
			break;
        case Symbole::CONST: //r16
			automate.reduction(1, T);
			break;
        case Symbole::ECRIRE: //r16
			automate.reduction(1, T);
			break;
        case Symbole::LIRE: //r16
			automate.reduction(1, T);
			break;
        case Symbole::AFFECT: //r16
			automate.reduction(1, T);
			break;
        case Symbole::VAL: //r16
			automate.reduction(1, T);
			break;
        case Symbole::ID: //r16
			automate.reduction(1, T);
			break;
        case Symbole::PO: //r16
			automate.reduction(1, T);
			break;
        case Symbole::PF: //r16
			automate.reduction(1, T);
			break;
        case Symbole::PLUS: //r16
			automate.reduction(1, T);
			break;
        case Symbole::MOINS: //r16
			automate.reduction(1, T);
			break;
        case Symbole::FOIS: //r16
			automate.reduction(1, T);
			break;
        case Symbole::DIVISE: //r16
			automate.reduction(1, T);
			break;
        case Symbole::EG: //r16
			automate.reduction(1, T);
			break;
        case Symbole::V: //r16
			automate.reduction(1, T);
			break;
        case Symbole::PV: //r16
			automate.reduction(1, T);
			break;
        case Symbole::END: //r16
			automate.reduction(1, T);
			break;
    }*/
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
   /* switch (s->getType())
	{
        case Symbole::VAR: //r17
			automate.reduction(1, F);
			break;
        case Symbole::CONST: //r17
			automate.reduction(1, F);
			break;
        case Symbole::ECRIRE: //r17
			automate.reduction(1, F);
			break;
        case Symbole::LIRE: //r17
			automate.reduction(1, F);
			break;
        case Symbole::AFFECT: //r17
			automate.reduction(1, F);
			break;
        case Symbole::VAL: //r17
			automate.reduction(1, F);
			break;
        case Symbole::ID: //r17
			automate.reduction(1, F);
			break;
        case Symbole::PO: //r17
			automate.reduction(1, F);
			break;
        case Symbole::PF: //r17
			automate.reduction(1, F);
			break;
        case Symbole::PLUS: //r17
			automate.reduction(1, F);
			break;
        case Symbole::MOINS: //r17
			automate.reduction(1, F);
			break;
        case Symbole::FOIS: //r17
			automate.reduction(1, F);
			break;
        case Symbole::DIVISE: //r17
			automate.reduction(1, F);
			break;
        case Symbole::EG: //r17
			automate.reduction(1, F);
			break;
        case Symbole::V: //r17
			automate.reduction(1, F);
			break;
        case Symbole::PV: //r17
			automate.reduction(1, F);
			break;
        case Symbole::END: //r17
			automate.reduction(1, F);
			break;
    }*/
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
   /* switch (s->getType())
	{
        case Symbole::VAR: //r18
			automate.reduction(1, F);
			break;
        case Symbole::CONST: //r18
			automate.reduction(1, F);
			break;
        case Symbole::ECRIRE: //r18
			automate.reduction(1, F);
			break;
        case Symbole::LIRE: //r18
			automate.reduction(1, F);
			break;
        case Symbole::AFFECT: //r18
			automate.reduction(1, F);
			break;
        case Symbole::VAL: //r18
			automate.reduction(1, F);
			break;
        case Symbole::ID: //r18
			automate.reduction(1, F);
			break;
        case Symbole::PO: //r18
			automate.reduction(1, F);
			break;
        case Symbole::PF: //r18
			automate.reduction(1, F);
			break;
        case Symbole::PLUS: //r18
			automate.reduction(1, F);
			break;
        case Symbole::MOINS: //r18
			automate.reduction(1, F);
			break;
        case Symbole::FOIS: //r18
			automate.reduction(1, F);
			break;
        case Symbole::DIVISE: //r18
			automate.reduction(1, F);
			break;
        case Symbole::EG: //r18
			automate.reduction(1, F);
			break;
        case Symbole::V: //r18
			automate.reduction(1, F);
			break;
        case Symbole::PV: //r18
			automate.reduction(1, F);
			break;
        case Symbole::END: //r18
			automate.reduction(1, F);
			break;
    }*/
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
   /* switch (s->getType())
	{
        case Symbole::VAL: //d14
            automate.decalage(s, new Etat14);
			break;
        case Symbole::ID: //d13
			automate.decalage(s, new Etat13);
			break;
        case Symbole::PO: //d15
			automate.decalage(s, new Etat15);
			break;
    }*/
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
    /*switch (s->getType())
	{
        case Symbole::PF: //d17
			automate.decalage(s, new Etat17);
			break;
        case Symbole::PLUS: //d18
			automate.decalage(s, new Etat18);
			break;
        case Symbole::MOINS: //d15
			automate.decalage(s, new Etat15);
			break;
    }*/
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
   /* switch (s->getType())
	{
        case Symbole::VAR: //r19
			automate.reduction(3, F);
			break;
        case Symbole::CONST: //r19
			automate.reduction(3, F);
			break;
        case Symbole::ECRIRE: //r19
			automate.reduction(3, F);
			break;
        case Symbole::LIRE: //r19
			automate.reduction(3, F);
			break;
        case Symbole::AFFECT: //r19
			automate.reduction(3, F);
			break;
        case Symbole::VAL: //r19
			automate.reduction(3, F);
			break;
        case Symbole::ID: //r19
			automate.reduction(3, F);
			break;
        case Symbole::PO: //r19
			automate.reduction(3, F);
			break;
        case Symbole::PF: //r19
			automate.reduction(3, F);
			break;
        case Symbole::PLUS: //r19
			automate.reduction(3, F);
			break;
        case Symbole::MOINS: //r19
			automate.reduction(3, F);
			break;
        case Symbole::FOIS: //r19
			automate.reduction(3, F);
			break;
        case Symbole::DIVISE: //r19
			automate.reduction(3, F);
			break;
        case Symbole::EG: //r19
			automate.reduction(3, F);
			break;
        case Symbole::V: //r19
			automate.reduction(3, F);
			break;
        case Symbole::PV: //r19
			automate.reduction(3, F);
			break;
        case Symbole::END: //r19
			automate.reduction(3, F);
			break;
    }*/
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
   /* switch (s->getType())
	{
        case Symbole::VAR: //r18
			automate.reduction(1, F);
			break;
        case Symbole::CONST: //r18
			automate.reduction(1, F);
			break;
        case Symbole::ECRIRE: //r18
			automate.reduction(1, F);
			break;
        case Symbole::LIRE: //r18
			automate.reduction(1, F);
			break;
        case Symbole::AFFECT: //r18
			automate.reduction(1, F);
			break;
        case Symbole::VAL: //r18
			automate.reduction(1, F);
			break;
        case Symbole::ID: //r18
			automate.reduction(1, F);
			break;
        case Symbole::PO: //r18
			automate.reduction(1, F);
			break;
        case Symbole::PF: //r18
			automate.reduction(1, F);
			break;
        case Symbole::PLUS: //r18
			automate.reduction(1, F);
			break;
        case Symbole::MOINS: //r18
			automate.reduction(1, F);
			break;
        case Symbole::FOIS: //r18
			automate.reduction(1, F);
			break;
        case Symbole::DIVISE: //r18
			automate.reduction(1, F);
			break;
        case Symbole::EG: //r18
			automate.reduction(1, F);
			break;
        case Symbole::V: //r18
			automate.reduction(1, F);
			break;
        case Symbole::PV: //r18
			automate.reduction(1, F);
			break;
        case Symbole::END: //r18
			automate.reduction(1, F);
			break;
    }*/
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
    /*switch (s->getType())
	{
        case Symbole::PF: //r14
			automate.reduction(1, E);
			break;
        case Symbole::PLUS: //r14
			automate.reduction(1, E);
			break;
        case Symbole::MOINS: //r14
			automate.reduction(1, E);
			break;
        case Symbole::FOIS: //d22
			automate.decalage(s, new Etat22);
			break;
        case Symbole::DIVISE: //d23
			automate.decalage(s, new Etat23);
			break;
        case Symbole::PV: //r14
			automate.reduction(1, E);
			break;
    }*/
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
    switch (s->getType())
	{
        case Symbole::VAL: //d14
            automate.decalage(s, new Etat14("E14"));
			break;
        case Symbole::ID: //d13
            automate.decalage(s, new Etat13("E13"));
			break;
        case Symbole::PO: //d15
            automate.decalage(s, new Etat15("E15"));
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
