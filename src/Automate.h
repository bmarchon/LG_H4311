#ifndef AUTOMATE_H
#define AUTOMATE_H

#include <stack>
#include <string.h>
#include <iostream>
#include <map>

#include "AnalyseurLexical.h"
#include "Declaration.h"
#include "Etat.h"
#include "Etat1aN.h"
#include "Instruction.h"
#include "InstructionEcriture.h"
#include "InstructionLecture.h"
#include "InstructionAffectation.h"
#include "DecVariable.h"
#include "DecConstante.h"
#include "Programme.h"
#include "Symbole.h"
#include "Identifiant.h"

using namespace std;
class Automate
{
    public:
        Automate();
        Automate(AnalyseurLexical *aL);
        bool reduction(int nbEtat, Symbole *s);
        bool decalage(Symbole *s, Etat *etat);
        bool analyse();
        AnalyseurLexical *getAnalyseurLexical();
        virtual ~Automate();
        void pushEtat(Etat *etat);
        // renvoie le symbole qui se trouve en haut de la pile
        Symbole *getDernierSymbole();
        void consommer();
        void popSymbole();
        Programme getProgramme();
        void ajouter(Declaration* dec);
        void ajouter(Instruction* instr);

        void analyseStatique();
        bool doubleDeclaration(string nomIdentifiant);
        void executer();
    protected:
        AnalyseurLexical *aLexical;
        stack<Etat *> etats;
        stack<Symbole *> symboles;
        
        struct analyseSymbole {
            analyseSymbole(Symbole * s, bool isC)
            {
                this->s = s;
                this->affecte = false;
                this->utilise = false;
                this->isConstante = isC;
            }

            Symbole * s;
            bool affecte;
            bool utilise;
            bool isConstante;
        };
        map<string,analyseSymbole> tableauAnalyseStatique;
    private:
        Programme programme;
        map<string,Identifiant*> identifiants;
        void checkIdent(Identifiant * id, bool isExpression);
        void checkExpression(Expression * expr);
};

#endif // AUTOMATE_H
