#include "State1toN.h"

// fonction de transition State 0
bool State0::transition(Automat &automat, Symbol *s)
{
    switch (s->getType())
	{
        case  VAR:
        case  CONST:
        case  ECRIRE:
        case  LIRE:
        case  ID:
        case  END:
            automat.reduce(0, new Declaration());
            break;
        case D:
            automat.shift(s, new State1());
            break;

        default:
             throw std::logic_error( SYNTAX_ERRORS );

            break;

	}
	return false;
}

//---------------------------------------------

// fonction de transition State 1
bool State1::transition(Automat &automat, Symbol *s)
{
    switch (s->getType())
	{
        case  VAR:
			automat.shift(s, new State4());
            automat.consume();
			break;
        case  CONST:
			automat.shift(s, new State3());
            automat.consume();
			break;
        case  ECRIRE:
        case  LIRE:
        case  ID:
        case  END:
            automat.reduce(0, new Instruction());
            break;
        case I:
            automat.shift(s, new State2());
            break;
        default:
            throw std::logic_error( SYNTAX_ERRORS );
            break;

	}
	return false;
}

//---------------------------------------------

// fonction de transition State 2
bool State2::transition(Automat &automat, Symbol *s)
{
    //Instruction *instruction;
    //Declaration *declaration;
    //Programme *p;
    switch (s->getType())
	{
        case  ECRIRE:
            automat.shift(s, new State5());
            automat.consume();
			break;
        case  LIRE:
            automat.shift(s, new State6());
            automat.consume();
			break;
        case  ID:
            automat.shift(s, new State7());
            automat.consume();
			break;
        case  END:
            cout << "program is valid" << endl;
            return true;
        default:
            throw std::logic_error( SYNTAX_ERRORS );
            break;
	}
	return false;
}

//---------------------------------------------

// fonction de transition State 3
bool State3::transition(Automat &automat, Symbol *s)
{
    switch (s->getType())
	{
        case  ID:
            if(automat.isDoubleDeclaration(((Identifier *)s)->getName()) && !automat.isNewIdentifier())
            {
                throw std::logic_error("double declaration of " + ((Identifier*)s)->getName());
            }
            automat.shift(s, new State40());
            automat.consume();
			break;
        case LC:
            automat.shift(s,new State34());
            break;
        default:
            throw std::logic_error( SYNTAX_ERRORS );
            break;
	}
	return false;
}

//---------------------------------------------

// fonction de transition State 4
bool State4::transition(Automat &automat, Symbol *s)
{
    switch (s->getType())
	{
        case  ID:
            if(automat.isDoubleDeclaration(((Identifier *)s)->getName()) && !automat.isNewIdentifier())
            {
                throw std::logic_error("double declaration of " + ((Identifier*)s)->getName());
            }
            automat.shift(s, new State29());
            automat.consume();
			break;
        case LV:
            automat.shift(s, new State30());
            break;
        default:
            throw std::logic_error( SYNTAX_ERRORS );
            break;
	}
	return false;
}

//---------------------------------------------

// fonction de transition State 5
bool State5::transition(Automat &automat, Symbol *s)
{
    switch (s->getType())
	{
        case  VAL:
            automat.shift(s, new State14());
            automat.consume();
			break;
        case  ID:
            automat.shift(s, new State13());
            automat.consume();
			break;
        case  PO:
            automat.shift(s, new State15());
            automat.consume();
			break;
        case EXPR:
            automat.shift(s, new State8());
            break;
        case T:
            automat.shift(s, new State19());
            break;
        case F:
            automat.shift(s, new State12());
            break;
        default:
            throw std::logic_error( SYNTAX_ERRORS );
            break;
	}
	return false;
}

//---------------------------------------------

// fonction de transition State 6
bool State6::transition(Automat &automat, Symbol *s)
{
    switch (s->getType())
	{
        case  ID:
            automat.shift(s, new State27());
            automat.consume();
			break;
        default:
            throw std::logic_error( SYNTAX_ERRORS );
            break;
	}
	return false;
}

//---------------------------------------------

// fonction de transition State 7
bool State7::transition(Automat &automat, Symbol *s)
{
    switch (s->getType())
	{
        case  AFFECT:
            automat.shift(s, new State24());
            automat.consume();
			break;
        default:
            automat.shift(new SymbolSimple(AFFECT), new State24);
            break;
	}
	return false;
}

//---------------------------------------------

// fonction de transition State 8
bool State8::transition(Automat &automat, Symbol *s)
{
    switch (s->getType())
	{
        case  PLUS:
        	//si l'un des termes est 0 => on enleve
        	//sinon
            //cout << "PLUS" << endl;
            automat.shift(s, new State18());
            automat.consume();
			break;
        case  MOINS:
        	//si l'un des termes est 0 => on enleve
        	//sinon
            //cout << "MOINS" << endl;
            automat.shift(s, new State43());
            automat.consume();
			break;
        case  PV:
            automat.shift(s, new State9());
            automat.consume();
			break;
        case A:
            automat.shift(s, new State10());
            break;

        default:
            throw std::logic_error( SYNTAX_ERRORS );
            break;
	}
	return false;
}

//---------------------------------------------

// fonction de transition State 9
bool State9::transition(Automat &automat, Symbol *s)
{
    automat.popSymbol();
    Expression * expression  = (Expression*)automat.getLastSymbol();
    automat.popSymbol();
    automat.popSymbol();

    InstructionEcriture * ecr = new InstructionEcriture(expression);
    automat.add(ecr);
    automat.reduce(4, ecr);

	return false;
}

//---------------------------------------------

// fonction de transition State 10
bool State10::transition(Automat &automat, Symbol *s)
{
    switch (s->getType())
	{
        case  VAL:
            automat.shift(s, new State14());
            automat.consume();
			break;
        case  ID:
            automat.shift(s, new State13());
            automat.consume();
			break;
        case  PO:
            automat.shift(s, new State15());
            automat.consume();
			break;
        case T:
            automat.shift(s, new State11());
            break;
        case F:
            automat.shift(s, new State12());
            break;
        default:
            throw std::logic_error( SYNTAX_ERRORS );
            break;
	}
	return false;
}

//---------------------------------------------

// fonction de transition State 11
bool State11::transition(Automat &automat, Symbol *s)
{
// TO-DO put them in switch possible?
    Expression *exprRight, *exprLeft;
    AddOperator *opAdd;
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
            exprRight = (Expression *)automat.getLastSymbol();
            opAdd =(AddOperator *) automat.getLastSymbol();
            exprLeft  = (Expression *)automat.getLastSymbol();
            automat.reduce(3, new ExprAdd(exprLeft, opAdd, exprRight));
			break;

        case  FOIS: //d22
        	// si l'un ou l'autre des termes est un 1, on enleve
        	// sinon
			automat.shift(s, new State22());
            automat.consume();
			break;
        case  DIVISE: //d23
        	//si division par 1, on enleve l'operateur et le diviseur
        	//sinon
			automat.shift(s, new State23());
            automat.consume();
			break;
        case M:
           
            automat.shift(s, new State20());
            break;
        default:
            throw std::logic_error( SYNTAX_ERRORS );
            break;

    }
	return false;
}

//---------------------------------------------

// fonction de transition State 12
bool State12::transition(Automat &automat, Symbol *s)
{
    Expression * factor = (Expression *)automat.getLastSymbol();
    factor->setType(T);
    automat.reduce(1, factor);

	return false;
}

//---------------------------------------------

// fonction de transition State 13
bool State13::transition(Automat &automat, Symbol *s)
{
    automat.reduce(1, new Identifier(F, (Identifier *)automat.getLastSymbol()));

	return false;
}

//---------------------------------------------

// fonction de transition State 14
bool State14::transition(Automat &automat, Symbol *s)
{

    automat.reduce(1,new Val(F, (Val *) automat.getLastSymbol()));

	return false;
}

//---------------------------------------------

// fonction de transition State 15
bool State15::transition(Automat &automat, Symbol *s)
{
   switch (s->getType())
	{
        case  VAL: //d14
            automat.shift(s, new State14());
            automat.consume();
			break;
        case  ID: //d13
			automat.shift(s, new State13());
            automat.consume();
			break;
        case  PO: //d15
			automat.shift(s, new State15());
            automat.consume();
			break;
        case EXPR:
            automat.shift(s, new State16());
            break;
        case T:
            automat.shift(s, new State19());
            break;
        case F:
            automat.shift(s, new State12());
            break;
        default:
            throw std::logic_error( SYNTAX_ERRORS );
            break;
    }
	return false;
}

//---------------------------------------------

// fonction de transition State 16
bool State16::transition(Automat &automat, Symbol *s)
{
    switch (s->getType())
	{
        case  PF: //d17
			automat.shift(s, new State17());
            automat.consume();
			break;
        case  PLUS: //d18
        	//si l'un des termes est 0 => on enleve
        	//sinon
			automat.shift(s, new State18());
            automat.consume();
			break;
        case  MOINS: //d43
        	//si l'un des termes est 0 => on enleve
        	//sinon
			automat.shift(s, new State43());
            automat.consume();
			break;
        case A:
            automat.shift(s, new State10());
            break;
        default:
            throw std::logic_error( SYNTAX_ERRORS );
            break;
    }
	return false;
}

//---------------------------------------------

// fonction de transition State 17
bool State17::transition(Automat &automat, Symbol *s)
{
    automat.popSymbol();
    Expression *expression = (Expression *)automat.getLastSymbol();
    automat.popSymbol();
    automat.reduce(3, new ExprPar(expression, F));
	return false;
}

//---------------------------------------------

// fonction de transition State 18
bool State18::transition(Automat &automat, Symbol *s)
{
    automat.popSymbol();
    automat.reduce(1, new AddOperator('+'));
	return false;
}

//---------------------------------------------

// fonction de transition State 19
bool State19::transition(Automat &automat, Symbol *s)
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
            expr = (Expression *) automat.getLastSymbol();
            expr->setType(EXPR);
            automat.reduce(1, expr);
			break;
        case FOIS:
			automat.shift(s, new State22());
            automat.consume();
            //d22
            //si l'un des termes est 1 => on enleve
            //sinon
			break;
        case  DIVISE: 
			automat.shift(s, new State23());
            automat.consume();
            //d23
            //si le diviseur est 1 => on enleve
            //sinon
			break;
        case M:
            automat.shift(s, new State20());
            break;
        default:
            throw std::logic_error( SYNTAX_ERRORS );
            break;

    }
	return false;
}

//---------------------------------------------

// fonction de transition State 20
bool State20::transition(Automat &automat, Symbol *s)
{
    switch (s->getType())
	{
        case  VAL: //d14
            automat.shift(s, new State14());
            automat.consume();
			break;
        case  ID: //d13
            automat.shift(s, new State13());
            automat.consume();
			break;
        case  PO: //d15
            automat.shift(s, new State15());
            automat.consume();
			break;
        case F:
            automat.shift(s, new State21());
            break;
        default:
            throw std::logic_error( SYNTAX_ERRORS );
            break;
	}
	return false;
}

//---------------------------------------------

// fonction de transition State 21
bool State21::transition(Automat &automat, Symbol *s)
{
    Expression *exprRight = (Expression *)automat.getLastSymbol();
    MultOperator *operateur = (MultOperator *)automat.getLastSymbol();
    Expression *exprLeft = (Expression *)automat.getLastSymbol();
    automat.reduce(3, new ExprMult(T, exprLeft, operateur, exprRight));

    return false;
}

//---------------------------------------------

// fonction de transition State 22
bool State22::transition(Automat &automat, Symbol *s)
{
    automat.popSymbol();
    automat.reduce(1, new MultOperator('*'));

    return false;
}

//---------------------------------------------

// fonction de transition State 23
bool State23::transition(Automat &automat, Symbol *s)
{
    automat.popSymbol();
    automat.reduce(1, new MultOperator('/'));
    return false;
}

//---------------------------------------------

// fonction de transition State 24
bool State24::transition(Automat &automat, Symbol *s)
{

    switch (s->getType())
    {
		case VAL: //d25
            automat.shift(s, new State14());
            automat.consume();
            break;
        case PO:
            automat.shift(s, new State15());
            automat.consume();
            break;
        case ID:
            automat.shift(s, new State13());
            automat.consume();
            break;
        case EXPR:
            automat.shift(s, new State25());
            break;
        case F:
            automat.shift(s, new State12());
            break;
        case T:
            automat.shift(s, new State19());
            break;
        default:
            throw std::logic_error( SYNTAX_ERRORS );
            break;
    }

    return false;
}

//---------------------------------------------

// fonction de transition State 25
bool State25::transition(Automat &automat, Symbol *s)
{

    switch (s->getType())
    {
		case PV: //d26
            automat.shift(s, new State26());
            automat.consume();
            break;
        case PLUS:
        	//si l'un des termes est 0 => on enleve
        	//sinon
            automat.shift(s, new State18());
            automat.consume();
            break;
        case MOINS:
        	//si l'un des termes est 0 => on enleve
        	//sinon
            automat.shift(s, new State43());
            automat.consume();
            break;
        case A:
            automat.shift(s, new State10());
            break;
        default:
            throw std::logic_error( SYNTAX_ERRORS );
            break;
    }

    return false;
}

//---------------------------------------------

// fonction de transition State 26
bool State26::transition(Automat &automat, Symbol *s)
{

    automat.popSymbol(); //pv
    Expression * expr = (Expression *) automat.getLastSymbol();
    automat.popSymbol(); //affect
    Identifier * id = (Identifier *) automat.getLastSymbol();
    automat.popSymbol();

    InstructionAffectation * aff = new InstructionAffectation(id, expr);
    automat.add(aff);
    automat.reduce(5, aff);
    
    return false;
}

//---------------------------------------------

// fonction de transition State 27
bool State27::transition(Automat &automat, Symbol *s)
{

    switch (s->getType())
    {
		case PV: //d28
			automat.shift(s, new State28());
            automat.consume();
            break;
        default:
            automat.shift(new SymbolSimple(PV), new State28);
            break;
     }

     return false;
}

//---------------------------------------------

// fonction de transition State 28
bool State28::transition(Automat &automat, Symbol *s)
{
    automat.popSymbol(); //pv
    Identifier * identifier = (Identifier*) automat.getLastSymbol();
    automat.popSymbol(); //lire
    automat.popSymbol();

    InstructionLecture * lect = new InstructionLecture(identifier);
    automat.add(lect);
    automat.reduce(4, lect);
    
    return false;
}

//---------------------------------------------

// fonction de transition State 29
bool State29::transition(Automat &automat, Symbol *s)
{
    Identifier *identifier = (Identifier *)automat.getLastSymbol();
    automat.reduce(1, new DecVariable(identifier));

    return false;
}

//---------------------------------------------

// fonction de transition State 30
bool State30::transition(Automat &automat, Symbol *s)
{

    switch (s->getType())
    {
		case V: //d32
            automat.shift(s, new State32());
            automat.consume();
            break;
		case PV: //d31
            automat.shift(s, new State31());
            automat.consume();
            break;
        default:
            throw std::logic_error( SYNTAX_ERRORS );
            break;
    }

    return false;
}

//---------------------------------------------

// fonction de transition State 31
bool State31::transition(Automat &automat, Symbol *s)
{
	//r2
    automat.popSymbol(); //pv
    Declaration *variables = (Declaration *) automat.getLastSymbol();
    automat.popSymbol(); //var
    automat.popSymbol();

    automat.add(variables);
    automat.reduce(4, new Declaration());
    return false;
}

//---------------------------------------------

// fonction de transition State 32
bool State32::transition(Automat &automat, Symbol *s)
{
    switch(s->getType())
    {
        case  ID: //d33
            if(automat.isDoubleDeclaration(((Identifier *)s)->getName()) && !automat.isNewIdentifier())
            {
                throw std::logic_error("Double declaration");
            }
            automat.shift(s, new State33());
            automat.consume();
            break;
        default:
            throw std::logic_error( MISSING_ID_IN_VAR_DECLARATION );
            break;
    }
    return false;
}

//---------------------------------------------

// fonction de transition State 33
bool State33::transition(Automat &automat, Symbol *s)
{
	//r5
    Identifier *identifier = (Identifier *) automat.getLastSymbol();
    automat.popSymbol(); // v
    DecVariable *lv = (DecVariable *) automat.getLastSymbol();

    lv->addVariable(identifier);
    automat.reduce(3, lv);

    return false;
}

//---------------------------------------------

// fonction de transition State 34
bool State34::transition(Automat &automat, Symbol *s)
{
    switch(s->getType())
    {
        case  V: //d36
            automat.shift(s, new State36());
            automat.consume();
             break;
        case PV: //d35
            automat.shift(s, new State35());
            automat.consume();
            break;
        default:
            throw std::logic_error( MISSING_COMMA );
            break;
    }
    return false;
}

//---------------------------------------------

// fonction de transition State 35
bool State35::transition(Automat &automat, Symbol *s)
{	//r3
    automat.popSymbol(); //pv
    DecConstant *lc = (DecConstant *) automat.getLastSymbol();
    automat.popSymbol(); //const
    automat.popSymbol();
    automat.add(lc);
    automat.reduce(4, new Declaration());

    return false;
}

//---------------------------------------------

// fonction de transition State 36
bool State36::transition(Automat &automat, Symbol *s)
{
    switch(s->getType())
    {
        case  ID: //d37
            if(automat.isDoubleDeclaration(((Identifier *)s)->getName()) && !automat.isNewIdentifier())
            {
                throw std::logic_error("Double declaration");
            }
            automat.shift(s, new State37());
            automat.consume();
            break;
        default:
            throw std::logic_error( MISSING_ID_IN_CONST_DECLARATION );
            break;

    }
    return false;
}

//---------------------------------------------

// fonction de transition State 37
bool State37::transition(Automat &automat, Symbol *s)
{
    switch(s->getType())
    {
        case  EG: //d38
            automat.shift(s, new State38());
            automat.consume();
            break;
        default:
            automat.shift(new SymbolSimple(EG), new State38);
            break;
    }
    return false;
}

//---------------------------------------------

// fonction de transition State 38
bool State38::transition(Automat &automat, Symbol *s)
{
    switch(s->getType())
    {
        case  VAL: //d39
            automat.shift(s, new State39());
            automat.consume();
            break;
        default:
            throw std::logic_error( CONST_NO_VALUE );
            break;
    }
    return false;
}

//---------------------------------------------

// fonction de transition State 39
bool State39::transition(Automat &automat, Symbol *s)
{	//r7
    Val *valeur = (Val *)automat.getLastSymbol();
    automat.popSymbol(); // eg
    Identifier *id = (Identifier *) automat.getLastSymbol();
    automat.popSymbol(); //v
    DecConstant *lc = (DecConstant *) automat.getLastSymbol();

    id->setValue(valeur); 
    lc->addConstant(id);
    automat.reduce(5, lc);
    
    return false;
}

//---------------------------------------------

// fonction de transition State 40
bool State40::transition(Automat &automat, Symbol *s)
{
    switch(s->getType())
    {
        case  EG:
            automat.shift(s, new State41());
            automat.consume();
            break;
        default:
            automat.shift(new SymbolSimple(EG), new State41);
            // génerer une erreur
            break;
    }
    return false;
}

//---------------------------------------------

// fonction de transition State 41
bool State41::transition(Automat &automat, Symbol *s)
{
    switch(s->getType())
    {
        case  VAL:
            automat.shift(s, new State42());
            automat.consume();
            break;
        default:
            throw std::logic_error( CONST_NO_VALUE );
            break;
    }
    return false;
}

//---------------------------------------------

// fonction de transition State 42
bool State42::transition(Automat &automat, Symbol *s)
{
    Val * value = (Val *) automat.getLastSymbol();
    automat.popSymbol(); //eg
    Identifier *id = (Identifier *)automat.getLastSymbol();

    id->setValue(value);
    automat.reduce(3, new DecConstant(id));

    return false;
}

//---------------------------------------------

// fonction de transition State 43
bool State43::transition(Automat &automat, Symbol *s)
{
    automat.popSymbol();
    automat.reduce(1, new AddOperator('-'));

    return false;
}

//---------------------------------------------
