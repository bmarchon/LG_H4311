#include "Etat1aN.h"
#include "Declaration.h"
Etat0::Etat0(string n)
{
	nom = n;
}

bool Etat0::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  VAR:
            automate.reduction(0, s);
			break;
        case  CONST:
            automate.reduction(0, s);
			break;
        case  ECRIRE:
            automate.reduction(0, s);
			break;
        case  LIRE:
            automate.reduction(0, s);
			break;
        case  ID:
            automate.reduction(0, s);
			break;
        case  END:
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
        case  VAR:
			automate.decalage(s, new Etat4("etat4"));
			break;
        case  CONST:
			automate.decalage(s, new Etat3("etat3"));
			break;
        case  ECRIRE:
            automate.reduction(0, s);
			break;
        case  LIRE:
            automate.reduction(0, s);
			break;
        case  ID:
            automate.reduction(0, s);
			break;
        case  END:
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

bool Etat2::transition(Automate &automate, Symbole *s)
{
    return false;
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
bool Etat3::transition(Automate &automate, Symbole *s)
{
    return false;
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

bool Etat4::transition(Automate &automate, Symbole *s)
{
    return false;
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

bool Etat5::transition(Automate &automate, Symbole *s)
{
    return false;
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

bool Etat6::transition(Automate &automate, Symbole *s)
{
    return false;
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

bool Etat7::transition(Automate &automate, Symbole *s)
{
    return false;
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

bool Etat8::transition(Automate &automate, Symbole *s)
{
    return false;
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

bool Etat9::transition(Automate &automate, Symbole *s)
{
    return false;
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

bool Etat10::transition(Automate &automate, Symbole *s)
{
    return false;
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
        case  PF: //r13
            automate.reduction(3, E);
			break;
        case  PLUS: //r13
			automate.reduction(3, E);
			break;
        case  MOINS: //r13
			automate.reduction(3, E);
			break;
        case  FOIS: //d22
			automate.decalage(s, new Etat22);
			break;
        case  DIVISE: //d23
			automate.decalage(s, new Etat23);
			break;
        case  PV: //r13
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
        case  VAR: //r16
            automate.reduction(1, T);
			break;
        case  CONST: //r16
			automate.reduction(1, T);
			break;
        case  ECRIRE: //r16
			automate.reduction(1, T);
			break;
        case  LIRE: //r16
			automate.reduction(1, T);
			break;
        case  AFFECT: //r16
			automate.reduction(1, T);
			break;
        case  VAL: //r16
			automate.reduction(1, T);
			break;
        case  ID: //r16
			automate.reduction(1, T);
			break;
        case  PO: //r16
			automate.reduction(1, T);
			break;
        case  PF: //r16
			automate.reduction(1, T);
			break;
        case  PLUS: //r16
			automate.reduction(1, T);
			break;
        case  MOINS: //r16
			automate.reduction(1, T);
			break;
        case  FOIS: //r16
			automate.reduction(1, T);
			break;
        case  DIVISE: //r16
			automate.reduction(1, T);
			break;
        case  EG: //r16
			automate.reduction(1, T);
			break;
        case  V: //r16
			automate.reduction(1, T);
			break;
        case  PV: //r16
			automate.reduction(1, T);
			break;
        case  END: //r16
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
        case  VAR: //r17
			automate.reduction(1, F);
			break;
        case  CONST: //r17
			automate.reduction(1, F);
			break;
        case  ECRIRE: //r17
			automate.reduction(1, F);
			break;
        case  LIRE: //r17
			automate.reduction(1, F);
			break;
        case  AFFECT: //r17
			automate.reduction(1, F);
			break;
        case  VAL: //r17
			automate.reduction(1, F);
			break;
        case  ID: //r17
			automate.reduction(1, F);
			break;
        case  PO: //r17
			automate.reduction(1, F);
			break;
        case  PF: //r17
			automate.reduction(1, F);
			break;
        case  PLUS: //r17
			automate.reduction(1, F);
			break;
        case  MOINS: //r17
			automate.reduction(1, F);
			break;
        case  FOIS: //r17
			automate.reduction(1, F);
			break;
        case  DIVISE: //r17
			automate.reduction(1, F);
			break;
        case  EG: //r17
			automate.reduction(1, F);
			break;
        case  V: //r17
			automate.reduction(1, F);
			break;
        case  PV: //r17
			automate.reduction(1, F);
			break;
        case  END: //r17
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
        case  VAR: //r18
			automate.reduction(1, F);
			break;
        case  CONST: //r18
			automate.reduction(1, F);
			break;
        case  ECRIRE: //r18
			automate.reduction(1, F);
			break;
        case  LIRE: //r18
			automate.reduction(1, F);
			break;
        case  AFFECT: //r18
			automate.reduction(1, F);
			break;
        case  VAL: //r18
			automate.reduction(1, F);
			break;
        case  ID: //r18
			automate.reduction(1, F);
			break;
        case  PO: //r18
			automate.reduction(1, F);
			break;
        case  PF: //r18
			automate.reduction(1, F);
			break;
        case  PLUS: //r18
			automate.reduction(1, F);
			break;
        case  MOINS: //r18
			automate.reduction(1, F);
			break;
        case  FOIS: //r18
			automate.reduction(1, F);
			break;
        case  DIVISE: //r18
			automate.reduction(1, F);
			break;
        case  EG: //r18
			automate.reduction(1, F);
			break;
        case  V: //r18
			automate.reduction(1, F);
			break;
        case  PV: //r18
			automate.reduction(1, F);
			break;
        case  END: //r18
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
        case  VAL: //d14
            automate.decalage(s, new Etat14);
			break;
        case  ID: //d13
			automate.decalage(s, new Etat13);
			break;
        case  PO: //d15
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
        case  PF: //d17
			automate.decalage(s, new Etat17);
			break;
        case  PLUS: //d18
			automate.decalage(s, new Etat18);
			break;
        case  MOINS: //d15
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
        case  VAR: //r19
			automate.reduction(3, F);
			break;
        case  CONST: //r19
			automate.reduction(3, F);
			break;
        case  ECRIRE: //r19
			automate.reduction(3, F);
			break;
        case  LIRE: //r19
			automate.reduction(3, F);
			break;
        case  AFFECT: //r19
			automate.reduction(3, F);
			break;
        case  VAL: //r19
			automate.reduction(3, F);
			break;
        case  ID: //r19
			automate.reduction(3, F);
			break;
        case  PO: //r19
			automate.reduction(3, F);
			break;
        case  PF: //r19
			automate.reduction(3, F);
			break;
        case  PLUS: //r19
			automate.reduction(3, F);
			break;
        case  MOINS: //r19
			automate.reduction(3, F);
			break;
        case  FOIS: //r19
			automate.reduction(3, F);
			break;
        case  DIVISE: //r19
			automate.reduction(3, F);
			break;
        case  EG: //r19
			automate.reduction(3, F);
			break;
        case  V: //r19
			automate.reduction(3, F);
			break;
        case  PV: //r19
			automate.reduction(3, F);
			break;
        case  END: //r19
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
        case  VAR: //r18
			automate.reduction(1, F);
			break;
        case  CONST: //r18
			automate.reduction(1, F);
			break;
        case  ECRIRE: //r18
			automate.reduction(1, F);
			break;
        case  LIRE: //r18
			automate.reduction(1, F);
			break;
        case  AFFECT: //r18
			automate.reduction(1, F);
			break;
        case  VAL: //r18
			automate.reduction(1, F);
			break;
        case  ID: //r18
			automate.reduction(1, F);
			break;
        case  PO: //r18
			automate.reduction(1, F);
			break;
        case  PF: //r18
			automate.reduction(1, F);
			break;
        case  PLUS: //r18
			automate.reduction(1, F);
			break;
        case  MOINS: //r18
			automate.reduction(1, F);
			break;
        case  FOIS: //r18
			automate.reduction(1, F);
			break;
        case  DIVISE: //r18
			automate.reduction(1, F);
			break;
        case  EG: //r18
			automate.reduction(1, F);
			break;
        case  V: //r18
			automate.reduction(1, F);
			break;
        case  PV: //r18
			automate.reduction(1, F);
			break;
        case  END: //r18
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
        case  PF: //r14
			automate.reduction(1, E);
			break;
        case  PLUS: //r14
			automate.reduction(1, E);
			break;
        case  MOINS: //r14
			automate.reduction(1, E);
			break;
        case  FOIS: //d22
			automate.decalage(s, new Etat22);
			break;
        case  DIVISE: //d23
			automate.decalage(s, new Etat23);
			break;
        case  PV: //r14
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
        case  VAL: //d14
            automate.decalage(s, new Etat14("E14"));
			break;
        case  ID: //d13
            automate.decalage(s, new Etat13("E13"));
			break;
        case  PO: //d15
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
bool Etat21::transition(Automate &automate, Symbole *s)
{
   /* switch (s->getType())
    {
        case Symbole::VAR: //r15
            automate.reduction(1, T);
            break;
        case Symbole::CONST: //r15
            automate.reduction(1, T);
            break;
        case Symbole::ECRIRE: //r15
            automate.reduction(1, T);
            break;
        case Symbole::LIRE: //r15
            automate.reduction(1, T);
            break;
        case Symbole::AFFECT: //r15
            automate.reduction(1, T);
            break;
        case Symbole::VAL: //r15
            automate.reduction(1, T);
            break;
        case Symbole::ID: //r15
            automate.reduction(1, T);
            break;
        case Symbole::PO: //r15
            automate.reduction(1, T);
            break;
        case Symbole::PF: //r15
            automate.reduction(1, T);
            break;
        case Symbole::PLUS: //r15
            automate.reduction(1, T);
            break;
        case Symbole::MOINS: //r15
            automate.reduction(1, T);
            break;
        case Symbole::FOIS: //r15
            automate.reduction(1, T);
            break;
        case Symbole::DIVISE: //r15
            automate.reduction(1, T);
            break;
        case Symbole::EG: //r15
            automate.reduction(1, T);
            break;
        case Symbole::V: //r15
            automate.reduction(1, T);
            break;
        case Symbole::PV: //r15
            automate.reduction(1, T);
            break;
        case Symbole::END: //r15
            automate.reduction(1, T);
            break;
    }*/
    return false;
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
bool Etat22::transition(Automate &automate, Symbole *s)
{
   /* switch (s->getType())
    {
        case Symbole::VAR: //r22
            automate.reduction(1, M);
            break;
        case Symbole::CONST: //r22
            automate.reduction(1, M);
            break;
        case Symbole::ECRIRE: //r22
            automate.reduction(1, M);
            break;
        case Symbole::LIRE: //r22
            automate.reduction(1, M);
            break;
        case Symbole::AFFECT: //r22
            automate.reduction(1, M);
            break;
        case Symbole::VAL: //r22
            automate.reduction(1, M);
            break;
        case Symbole::ID: //r22
            automate.reduction(1, M);
            break;
        case Symbole::PO: //r22
            automate.reduction(1, M);
            break;
        case Symbole::PF: //r22
            automate.reduction(1, M);
            break;
        case Symbole::PLUS: //r22
            automate.reduction(1, M);
            break;
        case Symbole::MOINS: //r22
            automate.reduction(1, M);
            break;
        case Symbole::FOIS: //r22
            automate.reduction(1, M);
            break;
        case Symbole::DIVISE: //r22
            automate.reduction(1, M);
            break;
        case Symbole::EG: //r22
            automate.reduction(1, M);
            break;
        case Symbole::V: //r22
            automate.reduction(1, M);
            break;
        case Symbole::PV: //r22
            automate.reduction(1, M);
            break;
        case Symbole::END: //r22
            automate.reduction(1, M);
            break;
    }*/
    return false;
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
bool Etat23::transition(Automate &automate, Symbole *s)
{
   /* switch (s->getType())
    {
        case Symbole::VAR: //r23
            automate.reduction(1, M);
            break;
        case Symbole::CONST: //r23
            automate.reduction(1, M);
            break;
        case Symbole::ECRIRE: //r23
            automate.reduction(1, M);
            break;
        case Symbole::LIRE: //r23
            automate.reduction(1, M);
            break;
        case Symbole::AFFECT: //r23
            automate.reduction(1, M);
            break;
        case Symbole::VAL: //r23
            automate.reduction(1, M);
            break;
        case Symbole::ID: //r23
            automate.reduction(1, M);
            break;
        case Symbole::PO: //r23
            automate.reduction(1, M);
            break;
        case Symbole::PF: //r23
            automate.reduction(1, M);
            break;
        case Symbole::PLUS: //r23
            automate.reduction(1, M);
            break;
        case Symbole::MOINS: //r23
            automate.reduction(1, M);
            break;
        case Symbole::FOIS: //r23
            automate.reduction(1, M);
            break;
        case Symbole::DIVISE: //r23
            automate.reduction(1, M);
            break;
        case Symbole::EG: //r23
            automate.reduction(1, M);
            break;
        case Symbole::V: //r23
            automate.reduction(1, M);
            break;
        case Symbole::PV: //r23
            automate.reduction(1, M);
            break;
        case Symbole::END: //r23
            automate.reduction(1, M);
            break;
    }*/
    return false;
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
bool Etat24::transition(Automate &automate, Symbole *s)
{
   /*
    switch (s->getType())
    {
    case Symbole::VAL: //d25
            automate.decalage(s, new Etat25());
            }
    */
    return false;
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

bool Etat25::transition(Automate &automate, Symbole *s)
{
   /*
    switch (s->getType())
    {
    case Symbole::PV: //d26
            automate.decalage(s, new Etat26());
            }
    */
    return false;
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

bool Etat26::transition(Automate &automate, Symbole *s)
{
   /* switch (s->getType())
    {
        case Symbole::VAR: //r11
            automate.reduction(1, I);
            break;
        case Symbole::CONST: //r11
            automate.reduction(1, I);
            break;
        case Symbole::ECRIRE: //r11
            automate.reduction(1, I);
            break;
        case Symbole::LIRE: //r11
            automate.reduction(1, I);
            break;
        case Symbole::AFFECT: //r11
            automate.reduction(1, I);
            break;
        case Symbole::VAL: //r11
            automate.reduction(1, I);
            break;
        case Symbole::ID: //r11
            automate.reduction(1, I);
            break;
        case Symbole::PO: //r11
            automate.reduction(1, I);
            break;
        case Symbole::PF: //r11
            automate.reduction(1, I);
            break;
        case Symbole::PLUS: //r11
            automate.reduction(1, I);
            break;
        case Symbole::MOINS: //r11
            automate.reduction(1, I);
            break;
        case Symbole::FOIS: //r11
            automate.reduction(1, I);
            break;
        case Symbole::DIVISE: //r11
            automate.reduction(1, I);
            break;
        case Symbole::EG: //r11
            automate.reduction(1, I);
            break;
        case Symbole::V: //r11
            automate.reduction(1, I);
            break;
        case Symbole::PV: //r11
            automate.reduction(1, I);
            break;
        case Symbole::END: //r11
            automate.reduction(1, I);
            break;
    }*/
    return false;
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

bool Etat27::transition(Automate &automate, Symbole *s)
{
   /*
    switch (s->getType())
    {
    case Symbole::PV: //d28
            automate.decalage(s, new Etat28());
            }
    */
    return false;
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

bool Etat28::transition(Automate &automate, Symbole *s)
{
   /* switch (s->getType())
    {
        case Symbole::VAR: //r10
            automate.reduction(1, I);
            break;
        case Symbole::CONST: //r10
            automate.reduction(1, I);
            break;
        case Symbole::ECRIRE: //r10
            automate.reduction(1, I);
            break;
        case Symbole::LIRE: //r10
            automate.reduction(1, I);
            break;
        case Symbole::AFFECT: //r10
            automate.reduction(1, I);
            break;
        case Symbole::VAL: //r10
            automate.reduction(1, I);
            break;
        case Symbole::ID: //r10
            automate.reduction(1, I);
            break;
        case Symbole::PO: //r10
            automate.reduction(1, I);
            break;
        case Symbole::PF: //r10
            automate.reduction(1, I);
            break;
        case Symbole::PLUS: //r10
            automate.reduction(1, I);
            break;
        case Symbole::MOINS: //r10
            automate.reduction(1, I);
            break;
        case Symbole::FOIS: //r10
            automate.reduction(1, I);
            break;
        case Symbole::DIVISE: //r10
            automate.reduction(1, I);
            break;
        case Symbole::EG: //r10
            automate.reduction(1, I);
            break;
        case Symbole::V: //r10
            automate.reduction(1, I);
            break;
        case Symbole::PV: //r10
            automate.reduction(1, I);
            break;
        case Symbole::END: //r10
            automate.reduction(1, I);
            break;
    }*/
    return false;
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
bool Etat29::transition(Automate &automate, Symbole *s)
{
   /* switch (s->getType())
    {
        case Symbole::VAR: //r6
            automate.reduction(1, LV);
            break;
        case Symbole::CONST: //r6
            automate.reduction(1, LV);
            break;
        case Symbole::ECRIRE: //r6
            automate.reduction(1, LV);
            break;
        case Symbole::LIRE: //r6
            automate.reduction(1, LV);
            break;
        case Symbole::AFFECT: //r6
            automate.reduction(1, LV);
            break;
        case Symbole::VAL: //r6
            automate.reduction(1, LV);
            break;
        case Symbole::ID: //r6
            automate.reduction(1, LV);
            break;
        case Symbole::PO: //r6
            automate.reduction(1, LV);
            break;
        case Symbole::PF: //r6
            automate.reduction(1, LV);
            break;
        case Symbole::PLUS: //r6
            automate.reduction(1, LV);
            break;
        case Symbole::MOINS: //r6
            automate.reduction(1, LV);
            break;
        case Symbole::FOIS: //r6
            automate.reduction(1, LV);
            break;
        case Symbole::DIVISE: //r6
            automate.reduction(1, LV);
            break;
        case Symbole::EG: //r6
            automate.reduction(1, LV);
            break;
        case Symbole::V: //r6
            automate.reduction(1, LV);
            break;
        case Symbole::PV: //r16
            automate.reduction(1, LV);
            break;
    }*/
    return false;
}

//---------------------------------------------
Etat30::Etat30(string n)
{
    //ctor
}

bool Etat30::transition(Automate &automate, Symbole *s)
{
   /*
    switch (s->getType())
    {
    case Symbole::V: //d32
            automate.decalage(s, new Etat32());
            }
    case Symbole::PV: //d31
            automate.decalage(s, new Etat31());
            }
    */
    return false;
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

bool Etat31::transition(Automate &automate, Symbole *s)
{	//r2
    automate.reduction(4, new Declaration);
    return true;
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

bool Etat32::transition(Automate &automate, Symbole *s)
{
    switch(s->getType()){
        case  ID: //d33
            automate.decalage(s, new Etat33("E33"));
            automate.getAnalyseurLexical()->next();
    }
    return false;
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

bool Etat33::transition(Automate &automate, Symbole *s)
{	//r5
    //automate.reduction(3, LV);
    return true;
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

bool Etat34::transition(Automate &automate, Symbole *s)
{
    switch(s->getType()){
        case  V: //d36
            automate.decalage(s, new Etat36("E36"));
            automate.getAnalyseurLexical()->next();
             break;
        case PV: //d35
            automate.decalage(s, new Etat35("E35"));
            automate.getAnalyseurLexical()->next();
            break;
    }
    return false;
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

bool Etat35::transition(Automate &automate, Symbole *s)
{	//r3
    automate.reduction(4, new Declaration);
    return true;
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

bool Etat36::transition(Automate &automate, Symbole *s)
{
    switch(s->getType()){
        case  ID: //d37
            automate.decalage(s, new Etat37("E37"));
            automate.getAnalyseurLexical()->next();
    }
    return false;
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

bool Etat37::transition(Automate &automate, Symbole *s)
{
    switch(s->getType()){
        case  EG: //d38
            automate.decalage(s, new Etat38("E38"));
            automate.getAnalyseurLexical()->next();
    }
    return false;
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

bool Etat38::transition(Automate &automate, Symbole *s)
{
    switch(s->getType()){
        case  VAL: //d39
            automate.decalage(s, new Etat39("E39"));
            automate.getAnalyseurLexical()->next();
    }
    return false;
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

bool Etat39::transition(Automate &automate, Symbole *s)
{	//r7
    //automate.reduction(5, LC);
    return true;
}


//---------------------------------------------
Etat40::Etat40(string n)
{

}

Etat40::~Etat40()
{
	//dtor
}



bool Etat40::transition(Automate &automate, Symbole *s)
{
    switch(s->getType())
    {
        case  EG:
            automate.decalage(s, new Etat41("E41"));
    }
    return false;
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

bool Etat41::transition(Automate &automate, Symbole *s)
{
    switch(s->getType()){
        case  VAL:
            automate.decalage(s, new Etat42("E42"));
            automate.getAnalyseurLexical()->next();
    }
    return false;
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

bool Etat42::transition(Automate &automate, Symbole *s)
{
    automate.reduction(3, new Declaration);
    return true;
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

bool Etat43::transition(Automate &automate, Symbole *s)
{
    //automate.reduction(1, A);
    return true;
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

bool Etat44::transition(Automate &automate, Symbole *s)
{
    return true;
}
