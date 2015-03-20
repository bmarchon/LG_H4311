#include "Etat1aN.h"
#include "Declaration.h"

// ctor Etat0
Etat0::Etat0() : Etat(0)
{

}

// dtor Etat 0
Etat0::~Etat0() {}

// fonction de transition Etat 0
bool Etat0::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  VAR:
            //automate.reduction(0, D);
			break;
        case  CONST:
            //automate.reduction(0, D);
			break;
        case  ECRIRE:
            //automate.reduction(0, D);
			break;
        case  LIRE:
            //automate.reduction(0, D);
			break;
        case  ID:
            //automate.reduction(0, D);
			break;
        case  END:
            //automate.reduction(0, D);
            break;
	}
	return false;
}

//---------------------------------------------

// ctor Etat 1
Etat1::Etat1() : Etat (1)
{

}

// dtor Etat 1
Etat1::~Etat1() {}

// fonction de transition Etat 1
bool Etat1::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  VAR:
			automate.decalage(s, new Etat4());
			break;
        case  CONST:
			automate.decalage(s, new Etat3());
			break;
        case  ECRIRE:
            //automate.reduction(0, I);
			break;
        case  LIRE:
            //automate.reduction(0, I);
			break;
        case  ID:
            //automate.reduction(0, I);
			break;
        case  END:
            //automate.reduction(0, I);
            break;
	}
	return false;
}

//---------------------------------------------

// ctor Etat 2
Etat2::Etat2() : Etat (2)
{

}

// dtor Etat 2
Etat2::~Etat2() {}

// fonction de transition Etat 2
bool Etat2::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  ECRIRE:
            automate.decalage(s, new Etat5());
			break;
        case  LIRE:
            automate.decalage(s, new Etat6());
			break;
        case  ID:
            automate.decalage(s, new Etat7());
			break;
        case  END:
			return false;
	}
	return false;
}

//---------------------------------------------

// ctor Etat 3
Etat3::Etat3() : Etat (3)
{

}

// dtor Etat 3
Etat3::~Etat3() {}

// fonction de transition Etat 3
bool Etat3::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  ID:
            automate.decalage(s, new Etat40());
			break;
	}
	return false;
}

//---------------------------------------------

// ctor Etat 4
Etat4::Etat4() : Etat (4)
{

}

// dtor Etat 4
Etat4::~Etat4() {}

// fonction de transition Etat 4
bool Etat4::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  ID:
            automate.decalage(s, new Etat29());
			break;
	}
	return false;
}

//---------------------------------------------

// ctor Etat 5
Etat5::Etat5() : Etat (5)
{

}

// dtor Etat 5
Etat5::~Etat5() {}

// fonction de transition Etat 5
bool Etat5::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  VAL:
            automate.decalage(s, new Etat14());
			break;
        case  ID:
            automate.decalage(s, new Etat13());
			break;
        case  PO:
            automate.decalage(s, new Etat15());
			break;
	}
	return false;
}

//---------------------------------------------

// ctor Etat 6
Etat6::Etat6() : Etat (6)
{

}

// dtor Etat 6
Etat6::~Etat6() {}

// fonction de transition Etat 6
bool Etat6::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  ID:
            automate.decalage(s, new Etat27());
			break;
	}
	return false;
}

//---------------------------------------------

// ctor Etat 7
Etat7::Etat7() : Etat (7)
{

}

// dtor Etat 7
Etat7::~Etat7() {}

// fonction de transition Etat 7
bool Etat7::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  AFFECT:
            automate.decalage(s, new Etat24());
			break;
	}
	return false;
}

//---------------------------------------------

// ctor Etat 8
Etat8::Etat8() : Etat (8)
{

}

// dtor Etat 8
Etat8::~Etat8() {}

// fonction de transition Etat 8
bool Etat8::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  PLUS:
            automate.decalage(s, new Etat18());
			break;
        case  MOINS:
            automate.decalage(s, new Etat43());
			break;
        case  PV:
            automate.decalage(s, new Etat9());
			break;
	}
	return false;
}

//---------------------------------------------

// ctor Etat 9
Etat9::Etat9() : Etat (9)
{

}

// dtor Etat 9
Etat9::~Etat9() {}

// fonction de transition Etat 9
bool Etat9::transition(Automate &automate, Symbole *s)
{
	//automate.reduction(4, I);
	return false;
}

//---------------------------------------------

// ctor Etat 10
Etat10::Etat10() : Etat (10)
{

}

// dtor Etat 10
Etat10::~Etat10() {}

// fonction de transition Etat 10
bool Etat10::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  VAL:
            automate.decalage(s, new Etat14());
			break;
        case  ID:
            automate.decalage(s, new Etat13());
			break;
        case  PO:
            automate.decalage(s, new Etat15());
			break;
	}
	return false;
}

//---------------------------------------------

// ctor Etat 11
Etat11::Etat11() : Etat (11)
{

}

// dtor Etat 11
Etat11::~Etat11() {}

// fonction de transition Etat 11
bool Etat11::transition(Automate &automate, Symbole *s)
{
   /* switch (s->getType())
	{
        case  PF: //r13
            //automate.reduction(3, E);
			break;
        case  PLUS: //r13
			//automate.reduction(3, E);
			break;
        case  MOINS: //r13
			//automate.reduction(3, E);
			break;
        case  FOIS: //d22
			automate.decalage(s, new Etat22());
			break;
        case  DIVISE: //d23
			automate.decalage(s, new Etat23());
			break;
        case  PV: //r13
			//automate.reduction(3, E);
			break;
    }*/
	return false;
}

//---------------------------------------------

// ctor Etat 12
Etat12::Etat12() : Etat (12)
{

}

// dtor Etat 12
Etat12::~Etat12() {}

// fonction de transition Etat 12
bool Etat12::transition(Automate &automate, Symbole *s)
{
	//automate.reduction(1, T);
	return false;
}

//---------------------------------------------

// ctor Etat 13
Etat13::Etat13() : Etat (13)
{

}

// dtor Etat 13
Etat13::~Etat13() {}

// fonction de transition Etat 13
bool Etat13::transition(Automate &automate, Symbole *s)
{
	//automate.reduction(1, F);
	return false;
}

//---------------------------------------------

// ctor Etat 14
Etat14::Etat14() : Etat (14)
{

}

// dtor Etat 14
Etat14::~Etat14() {}

// fonction de transition Etat 14
bool Etat14::transition(Automate &automate, Symbole *s)
{
	//automate.reduction(1, F);
	return false;
}

//---------------------------------------------

// ctor Etat 15
Etat15::Etat15() : Etat (15)
{

}

// dtor Etat 15
Etat15::~Etat15() {}

// fonction de transition Etat 15
bool Etat15::transition(Automate &automate, Symbole *s)
{
   /* switch (s->getType())
	{
        case  VAL: //d14
            automate.decalage(s, new Etat14());
			break;
        case  ID: //d13
			automate.decalage(s, new Etat13());
			break;
        case  PO: //d15
			automate.decalage(s, new Etat15());
			break;
    }*/
	return false;
}

//---------------------------------------------

// ctor Etat 16
Etat16::Etat16() : Etat (16)
{

}

// dtor Etat 16
Etat16::~Etat16() {}

// fonction de transition Etat 16
bool Etat16::transition(Automate &automate, Symbole *s)
{
    /*switch (s->getType())
	{
        case  PF: //d17
			automate.decalage(s, new Etat17());
			break;
        case  PLUS: //d18
			automate.decalage(s, new Etat18());
			break;
        case  MOINS: //d43
			automate.decalage(s, new Etat43());
			break;
    }*/
	return false;
}

//---------------------------------------------

// ctor Etat 17
Etat17::Etat17() : Etat (17)
{

}

// dtor Etat 17
Etat17::~Etat17() {}

// fonction de transition Etat 17
bool Etat17::transition(Automate &automate, Symbole *s)
{
	//automate.reduction(3, F);
	return false;
}

//---------------------------------------------

// ctor Etat 18
Etat18::Etat18() : Etat (18)
{

}

// dtor Etat 18
Etat18::~Etat18() {}

// fonction de transition Etat 18
bool Etat18::transition(Automate &automate, Symbole *s)
{
	//automate.reduction(1, A);
	return false;
}

//---------------------------------------------

// ctor Etat 19
Etat19::Etat19() : Etat (19)
{

}

// dtor Etat 19
Etat19::~Etat19() {}

// fonction de transition Etat 19
bool Etat19::transition(Automate &automate, Symbole *s)
{
    /*switch (s->getType())
	{
        case  PF: //r14
			//automate.reduction(1, E);
			break;
        case  PLUS: //r14
			//automate.reduction(1, E);
			break;
        case  MOINS: //r14
			//automate.reduction(1, E);
			break;
        case  FOIS: //d22
			automate.decalage(s, new Etat22());
			break;
        case  DIVISE: //d23
			automate.decalage(s, new Etat23());
			break;
        case  PV: //r14
			//automate.reduction(1, E);
			break;
    }*/
	return false;
}

//---------------------------------------------

// ctor Etat 20
Etat20::Etat20() : Etat (20)
{

}

// dtor Etat 20
Etat20::~Etat20() {}

// fonction de transition Etat 20
bool Etat20::transition(Automate &automate, Symbole *s)
{
    switch (s->getType())
	{
        case  VAL: //d14
            automate.decalage(s, new Etat14());
			break;
        case  ID: //d13
            automate.decalage(s, new Etat13());
			break;
        case  PO: //d15
            automate.decalage(s, new Etat15());
			break;
	}
	return false;
}

//---------------------------------------------

// ctor Etat 21
Etat21::Etat21() : Etat (21)
{

}

// dtor Etat 21
Etat21::~Etat21() {}

// fonction de transition Etat 21
bool Etat21::transition(Automate &automate, Symbole *s)
{
	//automate.reduction(3, T);
    return false;
}

//---------------------------------------------

// ctor Etat 22
Etat22::Etat22() : Etat (22)
{

}

// dtor Etat 22
Etat22::~Etat22() {}

// fonction de transition Etat 22
bool Etat22::transition(Automate &automate, Symbole *s)
{
	//automate.reduction(1, M);
    return false;
}

//---------------------------------------------

// ctor Etat 23
Etat23::Etat23() : Etat (23)
{

}

// dtor Etat 23
Etat23::~Etat23() {}

// fonction de transition Etat 23
bool Etat23::transition(Automate &automate, Symbole *s)
{
	//automate.reduction(1, M);
    return false;
}

//---------------------------------------------

// ctor Etat 24
Etat24::Etat24() : Etat (24)
{

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
            automate.decalage(s, new Etat25());
    }
    */
    return false;
}

//---------------------------------------------

// ctor Etat 25
Etat25::Etat25() : Etat (25)
{

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
Etat26::Etat26() : Etat (26)
{

}

// dtor Etat 26
Etat26::~Etat26() {}

// fonction de transition Etat 26
bool Etat26::transition(Automate &automate, Symbole *s)
{
	//automate.reduction(1, I);
    return false;
}

//---------------------------------------------

// ctor Etat 27
Etat27::Etat27() : Etat (27)
{

}

// dtor Etat 27
Etat27::~Etat27() {}

// fonction de transition Etat 27
bool Etat27::transition(Automate &automate, Symbole *s)
{
   /*
    switch (s->getType())
    {
		case PV: //d28
			automate.decalage(s, new Etat28());
     }
    */
    return false;
}

//---------------------------------------------

// ctor Etat 28
Etat28::Etat28() : Etat (28)
{

}

// dtor Etat 28
Etat28::~Etat28() {}

// fonction de transition Etat 28
bool Etat28::transition(Automate &automate, Symbole *s)
{
	//automate.reduction(1, I);
    return false;
}

//---------------------------------------------

// ctor Etat 29
Etat29::Etat29() : Etat (29)
{

}

// dtor Etat 29
Etat29::~Etat29() {}

// fonction de transition Etat 29
bool Etat29::transition(Automate &automate, Symbole *s)
{
	//automate.reduction(1, LV);
    return false;
}

//---------------------------------------------

// ctor Etat 30
Etat30::Etat30() : Etat (30)
{

}

// dtor Etat 30
Etat30::~Etat30() {}

// fonction de transition Etat 30
bool Etat30::transition(Automate &automate, Symbole *s)
{
   /*
    switch (s->getType())
    {
		case V: //d32
            automate.decalage(s, new Etat32());
            break;
		case PV: //d31
            automate.decalage(s, new Etat31());
            break;
    }
    */
    return false;
}

//---------------------------------------------

// ctor Etat 31
Etat31::Etat31() : Etat (31)
{

}

// dtor Etat 31
Etat31::~Etat31() {}

// fonction de transition Etat 31
bool Etat31::transition(Automate &automate, Symbole *s)
{	
	//r2
	//automate.reduction(4, D);
    return false;
}

//---------------------------------------------

// ctor Etat 32
Etat32::Etat32() : Etat (32)
{

}

// dtor Etat 32
Etat32::~Etat32() {}

// fonction de transition Etat 32
bool Etat32::transition(Automate &automate, Symbole *s)
{
    switch(s->getType())
    {
        case  ID: //d33
            automate.decalage(s, new Etat33());
            automate.getAnalyseurLexical()->next();
    }
    return false;
}

//---------------------------------------------

// ctor Etat 33
Etat33::Etat33() : Etat (33)
{

}

// dtor Etat 33
Etat33::~Etat33() {}

// fonction de transition Etat 33
bool Etat33::transition(Automate &automate, Symbole *s)
{
	//r5
	//automate.reduction(3, LV);
    return false;
}

//---------------------------------------------

// ctor Etat 34
Etat34::Etat34() : Etat (34)
{

}

// dtor Etat 34
Etat34::~Etat34() {}

// fonction de transition Etat 34
bool Etat34::transition(Automate &automate, Symbole *s)
{
    switch(s->getType())
    {
        case  V: //d36
            automate.decalage(s, new Etat36());
            automate.getAnalyseurLexical()->next();
             break;
        case PV: //d35
            automate.decalage(s, new Etat35());
            automate.getAnalyseurLexical()->next();
            break;
    }
    return false;
}

//---------------------------------------------

// ctor Etat 35
Etat35::Etat35() : Etat (35)
{

}

// dtor Etat 35
Etat35::~Etat35() {}

// fonction de transition Etat 35
bool Etat35::transition(Automate &automate, Symbole *s)
{	//r3
    //automate.reduction(4, D);
    return false;
}

//---------------------------------------------

// ctor Etat 36
Etat36::Etat36() : Etat (36)
{

}

// dtor Etat 36
Etat36::~Etat36() {}

// fonction de transition Etat 36
bool Etat36::transition(Automate &automate, Symbole *s)
{
    switch(s->getType())
    {
        case  ID: //d37
            automate.decalage(s, new Etat37());
            automate.getAnalyseurLexical()->next();
    }
    return false;
}

//---------------------------------------------

// ctor Etat 37
Etat37::Etat37() : Etat (37)
{

}

// dtor Etat 37
Etat37::~Etat37() {}

// fonction de transition Etat 37
bool Etat37::transition(Automate &automate, Symbole *s)
{
    switch(s->getType())
    {
        case  EG: //d38
            automate.decalage(s, new Etat38());
            automate.getAnalyseurLexical()->next();
    }
    return false;
}

//---------------------------------------------

// ctor Etat 38
Etat38::Etat38() : Etat (38)
{

}

// dtor Etat 38
Etat38::~Etat38() {}

// fonction de transition Etat 38
bool Etat38::transition(Automate &automate, Symbole *s)
{
    switch(s->getType())
    {
        case  VAL: //d39
            automate.decalage(s, new Etat39());
            automate.getAnalyseurLexical()->next();
    }
    return false;
}

//---------------------------------------------

// ctor Etat 39
Etat39::Etat39() : Etat (39)
{

}

// dtor Etat 39
Etat39::~Etat39() {}

// fonction de transition Etat 39
bool Etat39::transition(Automate &automate, Symbole *s)
{	//r7
    //automate.reduction(5, LC);
    return false;
}

//---------------------------------------------

// ctor Etat 40
Etat40::Etat40() : Etat (40)
{

}

// dtor Etat 40
Etat40::~Etat40() {}

// fonction de transition Etat 40
bool Etat40::transition(Automate &automate, Symbole *s)
{
    switch(s->getType())
    {
        case  EG:
            automate.decalage(s, new Etat41());
    }
    return false;
}

//---------------------------------------------

// ctor Etat 41
Etat41::Etat41() : Etat (41)
{

}

// dtor Etat 41
Etat41::~Etat41() {}

// fonction de transition Etat 41
bool Etat41::transition(Automate &automate, Symbole *s)
{
    switch(s->getType())
    {
        case  VAL:
            automate.decalage(s, new Etat42());
            automate.getAnalyseurLexical()->next();
    }
    return false;
}

//---------------------------------------------

// ctor Etat 42
Etat42::Etat42() : Etat (42)
{

}

// dtor Etat 42
Etat42::~Etat42() {}

// fonction de transition Etat 42
bool Etat42::transition(Automate &automate, Symbole *s)
{
    //automate.reduction(3, LC);
    return false;
}

//---------------------------------------------

// ctor Etat 43
Etat43::Etat43() : Etat (43)
{

}

// dtor Etat 43
Etat43::~Etat43() {}

// fonction de transition Etat 43
bool Etat43::transition(Automate &automate, Symbole *s)
{
    //automate.reduction(1, A);
    return false;
}

//---------------------------------------------

// ctor Etat 44
Etat44::Etat44() : Etat (44)
{

}

// dtor Etat 44
Etat44::~Etat44() {}

// fonction de transition Etat 44
bool Etat44::transition(Automate &automate, Symbole *s)
{
    return false;
}
