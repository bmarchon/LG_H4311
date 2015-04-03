#ifndef STATE1TON_H
#define STATE1TON_H

#include "State.h"
#include "Automat.h"
#include "Symbol.h"
#include <string>

#include "Program.h"
#include "Instruction.h"
#include "InstructionEcriture.h"
#include "InstructionAffectation.h"
#include "InstructionLecture.h"
#include "ExprAdd.h"
#include "ExprMult.h"
#include "ExprBinaire.h"
#include "ExprPar.h"
#include "Operators.h"
#include "Declaration.h"
#include "DecVariable.h"
#include "DecConstant.h"
#include "Identifier.h"
#include "Val.h"

using namespace std;

const string MISSING_ID_IN_VAR_DECLARATION = "missing id in variable declaration";
const string MISSING_ID_IN_CONST_DECLARATION = "missing id in constant declaration";
const string MISSING_COMMA = "missing comma or semi-colon";
const string SYNTAX_ERRORS = "this file contains syntactic errors";
const string CONST_NO_VALUE = "found constant without initialization";

class State0: public State
{
	public:
		State0() : State(0) {}
		virtual ~State0() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State1: public State
{
	public:
		State1() : State(1) {}
		virtual ~State1() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State2: public State
{
	public:
		State2() : State(2) {}
		virtual ~State2() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State3: public State
{
	public:
		State3() : State(3) {}
		virtual ~State3() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State4 : public State
{
	public:
		State4() : State(4) {}
		virtual ~State4() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State5 : public State
{
	public:
		State5() : State(5) {}
		virtual ~State5() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State6 : public State
{
	public:
		State6() : State(6) {}
		virtual ~State6() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State7 : public State
{
	public:
		State7() : State(7) {}
		virtual ~State7() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State8 : public State
{
	public:
		State8() : State(8) {}
		virtual ~State8() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State9 : public State
{
	public:
		State9() : State(9) {}
		virtual ~State9() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State10 : public State
{
	public:
		State10() : State(10) {}
		virtual ~State10() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State11 : public State
{
	public:
		State11() : State(11) {}
		virtual ~State11() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State12 : public State
{
	public:
		State12() : State(12) {}
		virtual ~State12() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State13 : public State
{
	public:
		State13() : State(13) {}
		virtual ~State13() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State14 : public State
{
	public:
		State14() : State(14) {}
		virtual ~State14() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State15 : public State
{
	public:
		State15() : State(15) {}
		virtual ~State15() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State16 : public State
{
	public:
		State16() : State(16) {}
		virtual ~State16() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State17 : public State
{
	public:
		State17() : State(17) {}
		virtual ~State17() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State18 : public State
{
	public:
		State18() : State(18) {}
		virtual ~State18() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State19 : public State
{
	public:
		State19() : State(19) {}
		virtual ~State19() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State20 : public State
{
	public:
		State20() : State(20) {}
		virtual ~State20() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State21 : public State
{
	public:
		State21() : State(21) {}
		virtual ~State21() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State22 : public State
{
	public:
		State22() : State(22) {}
		virtual ~State22() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State23 : public State
{
	public:
		State23() : State(23) {}
		virtual ~State23() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State24 : public State
{
	public:
		State24() : State(24) {}
		virtual ~State24() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State25 : public State
{
	public:
		State25() : State(25) {}
		virtual ~State25() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State26 : public State
{
	public:
		State26() : State(26) {}
		virtual ~State26() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State27 : public State
{
	public:
		State27() : State(27) {}
		virtual ~State27() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State28 : public State
{
	public:
		State28() : State(28) {}
		virtual ~State28() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State29 : public State
{
	public:
		State29() : State(29) {}
		virtual ~State29() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State30 : public State
{
	public:
		State30() : State(30) {}
		virtual ~State30() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State31 : public State
{
	public:
		State31() : State(31) {}
		virtual ~State31() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State32 : public State
{
	public:
		State32() : State(32) {}
		virtual ~State32() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State33 : public State
{
	public:
		State33() : State(33) {}
		virtual ~State33() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State34 : public State
{
	public:
		State34() : State(34) {}
		virtual ~State34() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State35 : public State
{
	public:
		State35() : State(35) {}
		virtual ~State35() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State36 : public State
{
	public:
		State36() : State(36) {}
		virtual ~State36() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State37 : public State
{
	public:
		State37() : State(37) {}
		virtual ~State37() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State38 : public State
{
	public:
		State38() : State(38) {}
		virtual ~State38() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State39 : public State
{
	public:
		State39() : State(39) {}
		virtual ~State39() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State40 : public State
{
	public:
		State40() : State(40) {}
		virtual ~State40() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State41 : public State
{
	public:
		State41() : State(41) {}
		virtual ~State41() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State42 : public State
{
	public:
		State42() : State(42) {}
		virtual ~State42() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State43 : public State
{
	public:
		State43() : State(43) {}
		virtual ~State43() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

class State44 : public State
{
	public:
		State44() : State(44) {}
		virtual ~State44() {}
		bool transition(Automat & automat, Symbol * s);
		void print() const;
};

//-------------------------------------------

#endif // STATE1TON_H
