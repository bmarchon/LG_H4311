#include "Transformation.h"

Transformation::Transformation(Programme prog)
{
	//ctor
	this->programme = prog;
}

Transformation::~Transformation()
{
	//dtor
}

Programme Transformation::getProgramme()
{
	return this->programme;
}

void Transformation::transformer()
{
	cout << endl;	
	cout <<"transformation" << endl;
	Programme leProgramme=getProgramme();
	//leProgramme.afficher();
	vector<Instruction*> instructions = leProgramme.getInstructions();
	// trace : cout << instructions.size()<< endl;
	for(unsigned int i=0; i<instructions.size(); i++) {
		//instructions[i]->afficher();
		if (instructions[i]-> getInstType() == ECR)
		{
			// trace : cout <<"instruction ecrire"<<endl;
			InstructionEcriture* instru = (InstructionEcriture*)instructions[i];
			//Expression lExpression = instru->getExpression();
		}
		if (instructions[i]-> getInstType() == AFF)
		{
			// trace : cout <<"instruction affectation"<<endl;
			InstructionAffectation* instru = (InstructionAffectation*)instructions[i];
		}

	}
	cout <<"fin de la transformation"<< endl;
}
