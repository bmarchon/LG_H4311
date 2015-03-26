#ifndef AUTOMATE_H
#define AUTOMATE_H

#include <stack>
#include <string.h>
#include <iostream>

#include "AnalyseurLexical.h"
#include "Declaration.h"
#include "Etat.h"
#include "Etat1aN.h"
#include "Instruction.h"
#include "InstructionEcriture.h"
#include "InstructionLecture.h"
#include "InstructionAffectation.h"
#include "ListeVariables.h"
#include "ListeConstantes.h"
#include "Programme.h"
#include "Symbole.h"

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
        void testTableauanalyseeeeee();
        void pushEtat(Etat *etat);
        // renvoie le symbole qui se trouve en haut de la pile
        Symbole *getDernierSymbole();
        void consommer();
        void popSymbole();

        void ajouter(Declaration* dec);
        void ajouter(Instruction* instr);

        void analyseStatique();

        void executer();
    protected:
        AnalyseurLexical *aLexical;
        stack<Etat *> etats;
        stack<Symbole *> symboles;
        struct analyseSymbole {
            analyseSymbole(Symbole * s)
            {
                this->s = s;
                this->affecte = false;
                this->utilise = false;
            }

            Symbole * s;
            bool affecte;
            bool utilise;
        };
        vector<analyseSymbole> tableauAnalyseStatique;
    private:
        Programme programme;
};

#endif // AUTOMATE_H
