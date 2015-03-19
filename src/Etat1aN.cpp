#include "Etat1aN.h"
#include "Declaration.h"

// ctor Etat0
Etat0::Etat0(string n)
{
	nom = n;
}

// dtor Etat 0
Etat0::~Etat0() {}

// fonction de transition Etat 0
bool Etat0::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  VAR:
            automate.reduction(0, D);
			break;
        case  CONST:
            automate.reduction(0, D);
			break;
        case  ECRIRE:
            automate.reduction(0, D);
			break;
        case  LIRE:
            automate.reduction(0, D);
			break;
        case  ID:
            automate.reduction(0, D);
			break;
        case  END:
            automate.reduction(0, D);
	}
	return false;
}

//---------------------------------------------

// ctor Etat 1
Etat1::Etat1(string n)
{
	nom = n;
}

// dtor Etat 1
Etat1::~Etat1() {}

// fonction de transition Etat 1
bool Etat1::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  VAR:
			automate.decalage(s, new Etat4("Etat 4"));
			break;
        case  CONST:
			automate.decalage(s, new Etat3("Etat 3"));
			break;
        case  ECRIRE:
            automate.reduction(0, I);
			break;
        case  LIRE:
            automate.reduction(0, I);
			break;
        case  ID:
            automate.reduction(0, I);
			break;
        case  END:
            automate.reduction(0, I);
	}
	return false;
}

//---------------------------------------------

// ctor Etat 2
Etat2::Etat2(string n)
{
	nom = n;
}

// dtor Etat 2
Etat2::~Etat2() {}

// fonction de transition Etat 2
bool Etat2::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  ECRIRE:
            automate.decalage(s, new Etat5("Etat 5"));
			break;
        case  LIRE:
            automate.decalage(s, new Etat6("Etat 6"));
			break;
        case  ID:
            automate.decalage(s, new Etat7("Etat 7"));
			break;
        case  END:
			return true;
	}
	return false;
}

//---------------------------------------------

// ctor Etat 3
Etat3::Etat3(string n)
{
	nom = n;
}

// dtor Etat 3
Etat3::~Etat3() {}

// fonction de transition Etat 3
bool Etat3::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  ID:
            automate.decalage(s, new Etat40("Etat 40"));
			break;
	}
	return false;
}

//---------------------------------------------

// ctor Etat 4
Etat4::Etat4(string n)
{
	nom = n;
}

// dtor Etat 4
Etat4::~Etat4() {}

// fonction de transition Etat 4
bool Etat4::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  ID:
            automate.decalage(s, new Etat29("Etat 29"));
			break;
	}
	return false;
}

//---------------------------------------------

// ctor Etat 5
Etat5::Etat5(string n)
{
	nom = n;
}

// dtor Etat 5
Etat5::~Etat5() {}

// fonction de transition Etat 5
bool Etat5::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  VAL:
            automate.decalage(s, new Etat14("Etat 14"));
			break;
        case  ID:
            automate.decalage(s, new Etat13("Etat 13"));
			break;
        case  PO:
            automate.decalage(s, new Etat15("Etat 15"));
			break;
	}
	return false;
}

//---------------------------------------------

// ctor Etat 6
Etat6::Etat6(string n)
{
	nom = n;
}

// dtor Etat 6
Etat6::~Etat6() {}

// fonction de transition Etat 6
bool Etat6::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  ID:
            automate.decalage(s, new Etat27("Etat 27"));
			break;
	}
	return false;
}

//---------------------------------------------

// ctor Etat 7
Etat7::Etat7(string n)
{
	nom = n;
}

// dtor Etat 7
Etat7::~Etat7() {}

// fonction de transition Etat 7
bool Etat7::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  AFFECT:
            automate.decalage(s, new Etat24("Etat 24"));
			break;
	}
	return false;
}

//---------------------------------------------

// ctor Etat 8
Etat8::Etat8(string n)
{
	nom = n;
}

// dtor Etat 8
Etat8::~Etat8() {}

// fonction de transition Etat 8
bool Etat8::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  PLUS:
            automate.decalage(s, new Etat18("Etat 18"));
			break;
        case  MOINS:
            automate.decalage(s, new Etat43("Etat 43"));
			break;
        case  PV:
            automate.decalage(s, new Etat9("Etat 9"));
			break;
	}
	return false;
}

//---------------------------------------------

// ctor Etat 9
Etat9::Etat9(string n)
{
	nom = n;
}

// dtor Etat 9
Etat9::~Etat9() {}

// fonction de transition Etat 9
bool Etat9::transition(Automate &automate, Symbole *s)
{
   switch (s->getType())
	{
        case  VAR:
            automate.reduction(4, I);
			break;
        case  CONST:
			automate.reduction(4, I);
			break;
        case  ECRIRE:
			automate.reduction(4, I);
			break;
        case  LIRE: 
			automate.reduction(4, I);
			break;
        case  AFFECT: 
			automate.reduction(4, I);
			break;
        case  VAL: 
			automate.reduction(4, I);
			break;
        case  ID: 
			automate.reduction(4, I);
			break;
        case  PO: 
			automate.reduction(4, I);
			break;
        case  PF: 
			automate.reduction(4, I);
			break;
        case  PLUS: 
			automate.reduction(4, I);
			break;
        case  MOINS: 
			automate.reduction(4, I);
			break;
        case  FOIS: 
			automate.reduction(4, I);
			break;
        case  DIVISE: 
			automate.reduction(4, I);
			break;
        case  EG: 
			automate.reduction(4, I);
			break;
        case  V: 
			automate.reduction(4, I);
			break;
        case  PV: 
			automate.reduction(4, I);
			break;
        case  END: 
			automate.reduction(4, I);
			break;
    }
	return false;
}

//---------------------------------------------

// ctor Etat 10
Etat10::Etat10(string n)
{
	nom = n;
}

// dtor Etat 10
Etat10::~Etat10() {}

// fonction de transition Etat 10
bool Etat10::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  VAL:
            automate.decalage(s, new Etat14("Etat 14"));
			break;
        case  ID:
            automate.decalage(s, new Etat13("Etat 13"));
			break;
        case  PO:
            automate.decalage(s, new Etat15("Etat 15"));
			break;
	}
	return false;
}

//---------------------------------------------

// ctor Etat 11
Etat11::Etat11(string n)
{
	nom = n;
}

// dtor Etat 11
Etat11::~Etat11() {}

// fonction de transition Etat 11
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
			automate.decalage(s, new Etat22("Etat 22"));
			break;
        case  DIVISE: //d23
			automate.decalage(s, new Etat23("Etat 23"));
			break;
        case  PV: //r13
			automate.reduction(3, E);
			break;
    }*/
	return false;
}

//---------------------------------------------

// ctor Etat 12
Etat12::Etat12(string n)
{
	nom = n;
}

// dtor Etat 12
Etat12::~Etat12() {}

// fonction de transition Etat 12
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

//---------------------------------------------

// ctor Etat 13
Etat13::Etat13(string n)
{
	nom = n;
}

// dtor Etat 13
Etat13::~Etat13() {}

// fonction de transition Etat 13
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

//---------------------------------------------

// ctor Etat 14
Etat14::Etat14(string n)
{
	nom = n;
}

// dtor Etat 14
Etat14::~Etat14() {}

// fonction de transition Etat 14
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

//---------------------------------------------

// ctor Etat 15
Etat15::Etat15(string n)
{
	nom = n;
}

// dtor Etat 15
Etat15::~Etat15() {}

// fonction de transition Etat 15
bool Etat15::transition(Automate &automate, Symbole *s)
{
   /* switch (s->getType())
	{
        case  VAL: //d14
            automate.decalage(s, new Etat14("Etat 14"));
			break;
        case  ID: //d13
			automate.decalage(s, new Etat13("Etat 14"));
			break;
        case  PO: //d15
			automate.decalage(s, new Etat15("Etat 15"));
			break;
    }*/
	return false;
}

//---------------------------------------------

// ctor Etat 16
Etat16::Etat16(string n)
{
	nom = n;
}

// dtor Etat 16
Etat16::~Etat16() {}

// fonction de transition Etat 16
bool Etat16::transition(Automate &automate, Symbole *s)
{
    /*switch (s->getType())
	{
        case  PF: //d17
			automate.decalage(s, new Etat17("Etat 17"));
			break;
        case  PLUS: //d18
			automate.decalage(s, new Etat18("Etat 18"));
			break;
        case  MOINS: //d43
			automate.decalage(s, new Etat43("Etat 43"));
			break;
    }*/
	return false;
}

//---------------------------------------------

// ctor Etat 17
Etat17::Etat17(string n)
{
	nom = n;
}

// dtor Etat 17
Etat17::~Etat17() {}

// fonction de transition Etat 17
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

//---------------------------------------------

// ctor Etat 18
Etat18::Etat18(string n)
{
	nom = n;
}

// dtor Etat 18
Etat18::~Etat18() {}

// fonction de transition Etat 18
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

//---------------------------------------------

// ctor Etat 19
Etat19::Etat19(string n)
{
	nom = n;
}

// dtor Etat 19
Etat19::~Etat19() {}

// fonction de transition Etat 19
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
			automate.decalage(s, new Etat22("Etat 22"));
			break;
        case  DIVISE: //d23
			automate.decalage(s, new Etat23("Etat 23"));
			break;
        case  PV: //r14
			automate.reduction(1, E);
			break;
    }*/
	return false;
}

//---------------------------------------------

// ctor Etat 20
Etat20::Etat20(string n)
{
	nom = n;
}

// dtor Etat 20
Etat20::~Etat20() {}

// fonction de transition Etat 20
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

//---------------------------------------------

// ctor Etat 21
Etat21::Etat21(string n)
{
	nom = n;
}

// dtor Etat 21
Etat21::~Etat21() {}

// fonction de transition Etat 21
bool Etat21::transition(Automate &automate, Symbole *s)
{
   /* switch (s->getType())
    {
        case Symbole::VAR: //r15
            automate.reduction(3, T);
            break;
        case Symbole::CONST: //r15
            automate.reduction(3, T);
            break;
        case Symbole::ECRIRE: //r15
            automate.reduction(3, T);
            break;
        case Symbole::LIRE: //r15
            automate.reduction(3, T);
            break;
        case Symbole::AFFECT: //r15
            automate.reduction(3, T);
            break;
        case Symbole::VAL: //r15
            automate.reduction(3, T);
            break;
        case Symbole::ID: //r15
            automate.reduction(3, T);
            break;
        case Symbole::PO: //r15
            automate.reduction(3, T);
            break;
        case Symbole::PF: //r15
            automate.reduction(3, T);
            break;
        case Symbole::PLUS: //r15
            automate.reduction(3, T);
            break;
        case Symbole::MOINS: //r15
            automate.reduction(3, T);
            break;
        case Symbole::FOIS: //r15
            automate.reduction(3, T);
            break;
        case Symbole::DIVISE: //r15
            automate.reduction(3, T);
            break;
        case Symbole::EG: //r15
            automate.reduction(3, T);
            break;
        case Symbole::V: //r15
            automate.reduction(3, T);
            break;
        case Symbole::PV: //r15
            automate.reduction(3, T);
            break;
        case Symbole::END: //r15
            automate.reduction(3, T);
            break;
    }*/
    return false;
}

//---------------------------------------------

// ctor Etat 22
Etat22::Etat22(string n)
{
	nom = n;
}

// dtor Etat 22
Etat22::~Etat22() {}

// fonction de transition Etat 22
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

//---------------------------------------------

// ctor Etat 23
Etat23::Etat23(string n)
{
	nom = n;
}

// dtor Etat 23
Etat23::~Etat23() {}

// fonction de transition Etat 23
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

//---------------------------------------------

// ctor Etat 24
Etat24::Etat24(string n)
{
	nom = n;
}

// dtor Etat 24
Etat24::~Etat24() {}

// fonction de transition Etat 24
bool Etat24::transition(Automate &automate, Symbole *s)
{
   /*
    switch (s->getType())
    {
		case VAL: //d25
            automate.decalage(s, new Etat25("Etat 25"));
    }
    */
    return false;
}

//---------------------------------------------

// ctor Etat 25
Etat25::Etat25(string n)
{
	nom = n;
}

// dtor Etat 25
Etat25::~Etat25() {}

// fonction de transition Etat 25
bool Etat25::transition(Automate &automate, Symbole *s)
{
   /*
    switch (s->getType())
    {
		case PV: //d26
            automate.decalage(s, new Etat26());
    }
    */
    return false;
}

//---------------------------------------------

// ctor Etat 26
Etat26::Etat26(string n)
{
	nom = n;
}

// dtor Etat 26
Etat26::~Etat26() {}

// fonction de transition Etat 26
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

//---------------------------------------------

// ctor Etat 27
Etat27::Etat27(string n)
{
	nom = n;
}

// dtor Etat 27
Etat27::~Etat27() {}

// fonction de transition Etat 27
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

//---------------------------------------------

// ctor Etat 28
Etat28::Etat28(string n)
{
	nom = n;
}

// dtor Etat 28
Etat28::~Etat28() {}

// fonction de transition Etat 28
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

//---------------------------------------------

// ctor Etat 29
Etat29::Etat29(string n)
{
	nom = n;
}

// dtor Etat 29
Etat29::~Etat29() {}

// fonction de transition Etat 29
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

// ctor Etat 30
Etat30::Etat30(string n)
{
	nom = n;
}

// dtor Etat 30
Etat30::~Etat30() {}

// fonction de transition Etat 30
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

//---------------------------------------------

// ctor Etat 31
Etat31::Etat31(string n)
{
	nom = n;
}

// dtor Etat 31
Etat31::~Etat31() {}

// fonction de transition Etat 31
bool Etat31::transition(Automate &automate, Symbole *s)
{	//r2
    automate.reduction(4, new Declaration);
    return true;
}

//---------------------------------------------

// ctor Etat 32
Etat32::Etat32(string n)
{
	nom = n;
}

// dtor Etat 32
Etat32::~Etat32() {}

// fonction de transition Etat 32
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

// ctor Etat 33
Etat33::Etat33(string n)
{
	nom = n;
}

// dtor Etat 33
Etat33::~Etat33() {}

// fonction de transition Etat 33
bool Etat33::transition(Automate &automate, Symbole *s)
{	//r5
    //automate.reduction(3, LV);
    return true;
}

//---------------------------------------------

// ctor Etat 34
Etat34::Etat34(string n)
{
	nom = n;
}

// dtor Etat 34
Etat34::~Etat34() {}

// fonction de transition Etat 34
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

// ctor Etat 35
Etat35::Etat35(string n)
{
	nom = n;
}

// dtor Etat 35
Etat35::~Etat35() {}

// fonction de transition Etat 35
bool Etat35::transition(Automate &automate, Symbole *s)
{	//r3
    automate.reduction(4, new Declaration);
    return true;
}

//---------------------------------------------

// ctor Etat 36
Etat36::Etat36(string n)
{
	nom = n;
}

// dtor Etat 36
Etat36::~Etat36() {}

// fonction de transition Etat 36
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

// ctor Etat 37
Etat37::Etat37(string n)
{
	nom = n;
}

// dtor Etat 37
Etat37::~Etat37() {}

// fonction de transition Etat 37
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

// ctor Etat 38
Etat38::Etat38(string n)
{
	nom = n;
}

// dtor Etat 38
Etat38::~Etat38() {}

// fonction de transition Etat 38
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

// ctor Etat 39
Etat39::Etat39(string n)
{
	nom = n;
}

// dtor Etat 39
Etat39::~Etat39() {}

// fonction de transition Etat 39
bool Etat39::transition(Automate &automate, Symbole *s)
{	//r7
    //automate.reduction(5, LC);
    return true;
}

//---------------------------------------------

// ctor Etat 40
Etat40::Etat40(string n)
{
	nom = n;
}

// dtor Etat 40
Etat40::~Etat40() {}

// fonction de transition Etat 40
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

// ctor Etat 41
Etat41::Etat41(string n)
{
	nom = n;
}

// dtor Etat 41
Etat41::~Etat41() {}

// fonction de transition Etat 41
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

// ctor Etat 42
Etat42::Etat42(string n)
{
	nom = n;
}

// dtor Etat 42
Etat42::~Etat42() {}

// fonction de transition Etat 42
bool Etat42::transition(Automate &automate, Symbole *s)
{
    automate.reduction(3, new Declaration);
    return true;
}

//---------------------------------------------

// ctor Etat 43
Etat43::Etat43(string n)
{
	nom = n;
}

// dtor Etat 43
Etat43::~Etat43() {}

// fonction de transition Etat 43
bool Etat43::transition(Automate &automate, Symbole *s)
{
    //automate.reduction(1, A);
    return true;
}

//---------------------------------------------

// ctor Etat 44
Etat44::Etat44(string ns)
{
	nom = n;
}

// dtor Etat 44
Etat44::~Etat44() {}

// fonction de transition Etat 44
bool Etat44::transition(Automate &automate, Symbole *s)
{
    return true;
}
