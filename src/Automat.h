#ifndef AUTOMAT_H
#define AUTOMAT_H

#include <stack>
#include <string.h>
#include <iostream>
#include <map>

#include "LexicalAnalyzer.h"
#include "State1toN.h"
#include "Instruction.h"
#include "InstructionEcriture.h"
#include "InstructionLecture.h"
#include "InstructionAffectation.h"
#include "Declaration.h"
#include "DecVariable.h"
#include "DecConstant.h"
#include "Program.h"
#include "Symbol.h"
#include "Identifier.h"

using namespace std;

class Automat
{
    public:
        Automat();
        Automat(LexicalAnalyzer *aLexical);
        virtual ~Automat();
        Program getProgram();
        Symbol *getLastSymbol(); // returns the first symbol on the stack
        void add(Declaration *dec);
        void add(Instruction *instr);
        void pushState(State *state);
        void consume();
        void popSymbol();
        bool isNewIdentifier();
        bool isDoubleDeclaration(string identifier);
        bool reduce(int nbState, Symbol *s);
        bool shift(Symbol *s, State *state);
        void lexicalAnalysis();
        void staticAnalysis();
        void execute();
    private:
        void checkIdent(Identifier * id, bool isExpression);
        void checkExpression(Expression * expr);
        LexicalAnalyzer *aLexical;
        stack<State *> states;
        stack<Symbol *> symbols;
        struct idProperties {
            idProperties(Identifier *id)
            {
                this->id = id;
                this->isDeclared = false;
                this->initialized = false;
                this->used = false;
                this->isConstant = false;
            }

            Identifier * id;
            bool isDeclared;
            bool initialized;
            bool used;
            bool isConstant;
        };
        map<string,idProperties> identifiers;
        bool newIdentifier;
        Program program;
};

#endif // AUTOMAT_H
