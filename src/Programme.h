#ifndef PROGRAMME_H
#define PROGRAMME_H

#include "Symbole.h"
#include "Declaration.h"
#include "Instruction.h"

#include <vector>

using namespace std;

class Programme : public Symbole
{
	public:
        Programme();
		virtual ~Programme();

		void ajouter(Declaration* dec);
		void ajouter(Instruction* instr);
		void executer();

	protected:
        vector<Declaration*> declarations;
        vector<Instruction*> instructions;

	private:
};

#endif // PROGRAMME_H
