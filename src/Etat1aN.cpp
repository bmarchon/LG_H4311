#include "Etat1aN.h"
#include "Declaration.h"
#include "Instruction.h"
#include "ExprBinaire.h"
#include "ExprPar.h"
#include "InstructionEcriture.h"
#include "InstructionAffectation.h"
#include "InstructionLecture.h"
#include "Programme.h"
#include "ExprAdd.h"
#include "ExprMult.h"
#include "ListeVariables.h"
#include "ListeConstantes.h"
#include "OperateurMultiplicatif.h"
#include "OperateurAdditif.h"
#include "DecVariable.h"
#include "DecConstante.h"
#include "Val.h"
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
        case  CONST:
        case  ECRIRE:
        case  LIRE:
        case  ID:
        case  END:
            automate.reduction(0, new Declaration());
            break;
        case D:
            automate.decalage(s, new Etat1());
            break;

        default:
            // génerer une erreur
            cout << "program is not valid" << endl; 
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
            automate.consommer();
			break;
        case  CONST:
			automate.decalage(s, new Etat3());
            automate.consommer();
			break;
        case  ECRIRE:
        case  LIRE:
        case  ID:
        case  END:
            automate.reduction(0, new Instruction());
            break;
        case I:
            automate.decalage(s, new Etat2());
            break;
        default:
            // génerer une erreur
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
    //Instruction *instruction;
    //Declaration *declaration;
    //Programme *p;
    switch (s->getType())
	{
        case  ECRIRE:
            automate.decalage(s, new Etat5());
            automate.consommer();
			break;
        case  LIRE:
            automate.decalage(s, new Etat6());
            automate.consommer();
			break;
        case  ID:
            automate.decalage(s, new Etat7());
            automate.consommer();
			break;
        case  END:
            cout << "program is valid" << endl;
            return true;
        default:
            // génerer une erreur
            break;
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
            automate.consommer();
			break;
        case LC:
            automate.decalage(s,new Etat34());
            break;
        default:
            // génerer une erreur
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
            automate.consommer();
			break;
        case LV:
            automate.decalage(s, new Etat30());
            break;
        default:
            // génerer une erreur
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
            automate.consommer();
			break;
        case  ID:
            automate.decalage(s, new Etat13());
            automate.consommer();
			break;
        case  PO:
            automate.decalage(s, new Etat15());
            automate.consommer();
			break;
        case EXPR:
            automate.decalage(s, new Etat8());
            break;
        case T:
            automate.decalage(s, new Etat19());
            break;
        case F:
            automate.decalage(s, new Etat12());
            break;
        default:
            //gestion des erreurs
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
            automate.consommer();
			break;
        default:
            // génerer une erreur
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
            automate.consommer();
			break;
        default:
            // génerer une erreur
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
        	//si l'un des termes est 0 => on enleve
        	//sinon
            automate.decalage(s, new Etat18());
            automate.consommer();
			break;
        case  MOINS:
        	//si l'un des termes est 0 => on enleve
        	//sinon
            automate.decalage(s, new Etat43());
            automate.consommer();
			break;
        case  PV:
            automate.decalage(s, new Etat9());
            automate.consommer();
			break;
        case A:
            automate.decalage(s, new Etat10());
            break;

        default:
            //getsion des erreurs
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
    automate.popSymbole();
    Expression * expression  = (Expression*)automate.getDernierSymbole();
    automate.popSymbole();
    automate.popSymbole();

    InstructionEcriture * ecr = new InstructionEcriture(expression);
    automate.ajouter(ecr);
    automate.reduction(4, ecr);

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
            automate.consommer();
			break;
        case  ID:
            automate.decalage(s, new Etat13());
            automate.consommer();
			break;
        case  PO:
            automate.decalage(s, new Etat15());
            automate.consommer();
			break;
        case T:
            automate.decalage(s, new Etat11());
            break;
        case F:
            automate.decalage(s, new Etat12());
            break;
        default:
            //gestion des erreurs
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
    Expression *exprDroite, *exprGauche;
    OperateurAdditif *opAdditif;
    switch (s->getType())
	{  
        case  PF: //r13
        case  PLUS:
        	//si l'un des termes est 0 => on enleve
        	//sinon
        case  MOINS:
			//si l'un des termes est 0 => on enleve
        	//sinon
        case  PV:
            exprDroite = (Expression *)automate.getDernierSymbole();
            opAdditif =(OperateurAdditif *) automate.getDernierSymbole();
            exprGauche  = (Expression *)automate.getDernierSymbole();
            automate.reduction(3, new ExprAdd(exprGauche, opAdditif, exprDroite));
			break;

        case  FOIS: //d22
        	// si l'un ou l'autre des termes est un 1, on enleve
        	// sinon
			automate.decalage(s, new Etat22());
            automate.consommer();
			break;
        case  DIVISE: //d23
        	//si division par 1, on enleve l'operateur et le diviseur
        	//sinon
			automate.decalage(s, new Etat23());
            automate.consommer();
			break;
        case M:
           
            automate.decalage(s, new Etat20());
            break;
        default:
        // gestion des erreurs
            break;

    }
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
    Expression * facteur = (Expression *)automate.getDernierSymbole();
    facteur->setType(T);
    automate.reduction(1, facteur);

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
    Identifiant *identifiant = (Identifiant *)automate.getDernierSymbole();
    identifiant->setType(F);
    automate.reduction(1,identifiant);

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
    Val *valeur = (Val *) automate.getDernierSymbole();
    valeur->setType(F);
    automate.reduction(1,valeur);

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
   switch (s->getType())
	{
        case  VAL: //d14
            automate.decalage(s, new Etat14());
            automate.consommer();
			break;
        case  ID: //d13
			automate.decalage(s, new Etat13());
            automate.consommer();
			break;
        case  PO: //d15
			automate.decalage(s, new Etat15());
            automate.consommer();
			break;
        case EXPR:
            automate.decalage(s, new Etat16());
            break;
        case T:
            automate.decalage(s, new Etat19());
            break;
        case F:
            automate.decalage(s, new Etat12());
            break;
        default:
            //gestion des erreurs
            break;
    }
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
    switch (s->getType())
	{
        case  PF: //d17
			automate.decalage(s, new Etat17());
            automate.consommer();
			break;
        case  PLUS: //d18
        	//si l'un des termes est 0 => on enleve
        	//sinon
			automate.decalage(s, new Etat18());
            automate.consommer();
			break;
        case  MOINS: //d43
        	//si l'un des termes est 0 => on enleve
        	//sinon
			automate.decalage(s, new Etat43());
            automate.consommer();
			break;
        case A:
            automate.decalage(s, new Etat10());
            break;
        default:
            //gestion des erreurs
            break;
    }
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
    automate.popSymbole();
    Expression *expression = (Expression *)automate.getDernierSymbole();
    automate.popSymbole();
    automate.reduction(3, new ExprPar(expression, F));
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
    automate.popSymbole();
    automate.reduction(1, new OperateurAdditif('+'));
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
    Expression * expr;
    switch (s->getType())
	{
        case  PF: //r14
        case  PLUS:
        	//si l'un des termes est 0 => on enleve
        	//sinon
        case  MOINS:
        	//si l'un des termes est 0 => on enleve
        	//sinon
        case  PV:
            expr = (Expression *) automate.getDernierSymbole();
            expr->setType(EXPR);
            automate.reduction(1, expr);
			break;
        case  FOIS: //d22
        	//si l'un des termes est 1 => on enleve
        	//sinon
			automate.decalage(s, new Etat22());
            automate.consommer();
			break;
        case  DIVISE: //d23
        	//si le diviseur est 1 => on enleve
        	//sinon
			automate.decalage(s, new Etat23());
            automate.consommer();
			break;
        case M:
            automate.decalage(s, new Etat20());
            break;
        default:
            //gestion des erreurs
            break;

    }
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
            automate.consommer();
			break;
        case  ID: //d13
            automate.decalage(s, new Etat13());
            automate.consommer();
			break;
        case  PO: //d15
            automate.decalage(s, new Etat15());
            automate.consommer();
			break;
        case F:
            automate.decalage(s, new Etat21());
            break;
        default:
            //gestion des erreurs
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
    Expression *expressionDroite = (Expression *)automate.getDernierSymbole();
    OperateurMultiplicatif *operateur = (OperateurMultiplicatif *)automate.getDernierSymbole();
    Expression *expressionGauche = (Expression *)automate.getDernierSymbole();
    automate.reduction(3, new ExprMult(T, expressionGauche, operateur, expressionDroite));

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
    automate.popSymbole();
    automate.reduction(1, new OperateurMultiplicatif('*'));

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
    automate.popSymbole();
    automate.reduction(1, new OperateurMultiplicatif('/'));
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

    switch (s->getType())
    {
		case VAL: //d25
            automate.decalage(s, new Etat14());
            automate.consommer();
            break;
        case PO:
            automate.decalage(s, new Etat15());
            automate.consommer();
            break;
        case ID:
            automate.decalage(s, new Etat13());
            automate.consommer();
            break;
        case EXPR:
            automate.decalage(s, new Etat25());
            break;
        case F:
            automate.decalage(s, new Etat12());
            break;
        case T:
            automate.decalage(s, new Etat19());
            break;
        default:
        //gestion des erreurs
            break;
    }

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

    switch (s->getType())
    {
		case PV: //d26
            automate.decalage(s, new Etat26());
            automate.consommer();
            break;
        case PLUS:
        	//si l'un des termes est 0 => on enleve
        	//sinon
            automate.decalage(s, new Etat18());
            automate.consommer();
            break;
        case MOINS:
        	//si l'un des termes est 0 => on enleve
        	//sinon
            automate.decalage(s, new Etat43());
            automate.consommer();
            break;
        case A:
            automate.decalage(s, new Etat10());
            break;
        default:
            //gestion des erreurs
            break;
    }

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

    automate.popSymbole(); //pv
    Expression * expr = (Expression *) automate.getDernierSymbole();
    automate.popSymbole(); //affect
    Identifiant * id = (Identifiant *) automate.getDernierSymbole();
    automate.popSymbole();

    InstructionAffectation * aff = new InstructionAffectation(id, expr);
    automate.ajouter(aff);
    automate.reduction(5, aff);
    
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

    switch (s->getType())
    {
		case PV: //d28
			automate.decalage(s, new Etat28());
            automate.consommer();
            break;
        default:
            //gestion des erreurs
            break;
     }

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
    automate.popSymbole(); //pv
    Identifiant * identifiant = (Identifiant*) automate.getDernierSymbole();
    automate.popSymbole(); //lire
    automate.popSymbole();

    InstructionLecture * lect = new InstructionLecture(identifiant);
    automate.ajouter(lect);
    automate.reduction(4, lect);
    
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
    Identifiant *identifiant = (Identifiant *)automate.getDernierSymbole();
    automate.reduction(1, new ListeVariables(identifiant));

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

    switch (s->getType())
    {
		case V: //d32
            automate.decalage(s, new Etat32());
            automate.consommer();
            break;
		case PV: //d31
            automate.decalage(s, new Etat31());
            automate.consommer();
            break;
        default:
            // génerer une erreur
            break;
    }

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
    automate.popSymbole(); //pv
    ListeVariables *listeVariables = (ListeVariables *) automate.getDernierSymbole();
    automate.popSymbole(); //var
    automate.popSymbole();

    DecVariable * decvar = new DecVariable(listeVariables);
    automate.ajouter(decvar);
    automate.reduction(4, decvar);
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
            automate.consommer();
        default:
            // génerer une erreur
            break;
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
    Identifiant *identifiant = (Identifiant *) automate.getDernierSymbole();
    automate.popSymbole(); // v
    ListeVariables *lv = (ListeVariables *) automate.getDernierSymbole();

    lv->ajouterIdentifiant(identifiant);
    automate.reduction(3, lv);

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
            automate.consommer();
             break;
        case PV: //d35
            automate.decalage(s, new Etat35());
            automate.consommer();
            break;
        default:
            // génerer une erreur
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
    automate.popSymbole(); //pv
    ListeConstantes *lc = (ListeConstantes *) automate.getDernierSymbole();


    //cout << "premier id : " << lc->identifiants().size() << endl;

    automate.popSymbole(); //const
    automate.popSymbole();
    DecConstante * decconst = new DecConstante(lc);

    automate.ajouter(decconst);
    automate.reduction(4, decconst);

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
            automate.consommer();
            break;
        default:
            //gestion des erreurs
            break;

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
            automate.consommer();
            break;
        default:
            // génerer une erreur
            break;
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
            automate.consommer();
            break;
        default:
            // génerer une erreur
            break;
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
    Val *valeur = (Val *)automate.getDernierSymbole();
    automate.popSymbole(); // eg
    Identifiant *id = (Identifiant *) automate.getDernierSymbole();
    automate.popSymbole(); //v
    ListeConstantes *lc = (ListeConstantes *) automate.getDernierSymbole();

    id->setValeurNum(valeur); 
    lc->ajouterConstante(id);
    automate.reduction(5, lc);
    
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
            automate.consommer();
            break;
        default:
            // génerer une erreur
            break;
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
            automate.consommer();
            break;
        default:
            // génerer une erreur
            break;
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
    //automate.popSymbole();
    Val * valeur = (Val *) automate.getDernierSymbole();
    automate.popSymbole(); //eg
    Identifiant *id = (Identifiant *)automate.getDernierSymbole();
    
    id->setValeurNum(valeur);
    automate.reduction(3, new ListeConstantes(id));

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
    automate.popSymbole();
    automate.reduction(1, new OperateurAdditif('-'));

    return false;
}

//---------------------------------------------
/* to be deleted?
// ctor Etat 44
Etat44::Etat44() : Etat (44)
{

}

// dtor Etat 44
Etat44::~Etat44() {}

// fonction de transition Etat 44
bool Etat44::transition(Automate &automate, Symbole *s)
{
    return true;
}*/
