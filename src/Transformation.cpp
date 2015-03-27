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
			//cout <<"instruction ecrire"<<endl;
			InstructionEcriture* instru = (InstructionEcriture*)instructions[i];
			//Recuperer l'expression associee a l'instruction
			Expressions leType = instru->getExpressionType();
			//while (leType != VALEUR && leType != IDENT)
			//{
				if (leType == BIN)
				{
					cout << "expression bin"<<endl;
				
				}
				if (leType == PAR)
				{
					cout << "expression paranthesee"<<endl;
				}
				//récupérer le type de l'expression d'au dessous et le mettre dans leType
				
			//}
			if (leType == VALEUR)
			{
				cout << "valeur"<<endl;
			}
			if (leType == IDENT)
			{
				cout << "identifiant"<<endl;
			}
		}
		if (instructions[i]-> getInstType() == AFF)
		{
			//cout <<"instruction affectation"<<endl;
			InstructionAffectation* instru = (InstructionAffectation*)instructions[i];
			//idem au dessus
			Expressions leType = instru->getExpressionType();
			if (leType == BIN)
			{
				cout << "expression bin"<<endl;
			}
			if (leType == PAR)
			{
				cout << "expression paranthesee"<<endl;
			}
			if (leType == VALEUR)
			{
				cout << "valeur"<<endl;
			}
			if (leType == IDENT)
			{
				cout << "identifiant"<<endl;
			}
		}

	}
	cout <<"fin de la transformation"<< endl;
}
