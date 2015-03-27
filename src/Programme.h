#ifndef PROGRAMME_H
#define PROGRAMME_H

#include "Symbole.h"
#include <iostream>
#include "Declaration.h"
#include "Instruction.h"
#include <vector>
#include <iostream>


using namespace std;

class Programme : public Symbole
{
	public:
        Programme();
		virtual ~Programme();

    	void afficher(); // Display the value for the representation


		void ajouter(Declaration* dec);
		void ajouter(Instruction* instr);
		void executer();

		vector<Declaration*> getDeclarations();
        vector<Instruction*> getInstructions();
	protected:
        vector<Declaration*> declarations;
        vector<Instruction*> instructions;

	private:
};

#endif // PROGRAMME_H
