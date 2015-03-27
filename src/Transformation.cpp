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
		instructions[i]->afficher();
		if (instructions[i]-> getInstType() == ECR)
		{
			//cout <<"instruction ecrire"<<endl;
			InstructionEcriture* instru = (InstructionEcriture*)instructions[i];
			Expression * lExpressionMere = instru->getExpression();
			Expressions leType = lExpressionMere->getExprType();
			//while (leType != VALEUR && leType != IDENT)
			//{
				if (leType == BIN)
				{
					cout << "expression bin"<<endl;
					ExprBinaire* lExpressionFille = (ExprBinaire *)lExpressionMere;
					Expressions leTypeFilsG = lExpressionFille->getGauche()->getExprType();
					if (leTypeFilsG == BIN)
					cout << "	type bin" <<endl;
					if (leTypeFilsG == VALEUR)
					cout <<"	type valeur"<<endl;
					if (leTypeFilsG == IDENT)
					cout << "	type ident" <<endl;
					Expressions leTypeFilsD = lExpressionFille->getDroite()->getExprType();
					if (leTypeFilsD == BIN)
					cout << "	type bin" <<endl;
					if (leTypeFilsD == VALEUR)
					cout <<"	type valeur"<<endl;
					if (leTypeFilsD == IDENT)
					cout << "	type ident" <<endl;
				}
				if (leType == PAR)
				{
					cout << "expression paranthesee"<<endl;
					ExprPar* lExpressionFille = (ExprPar *)lExpressionMere;
					/*
					Expressions leTypeFilsG = lExpressionFille->getGauche()->getExprType();
					if (leTypeFilsG == BIN)
					cout << "	type bin" <<endl;
					if (leTypeFilsG == VALEUR)
					cout <<"	type valeur"<<endl;
					if (leTypeFilsG == IDENT)
					cout << "	type ident" <<endl;
					Expressions leTypeFilsD = lExpressionFille->getGauche()->getExprType();
					if (leTypeFilsD == BIN)
					cout << "	type bin" <<endl;
					if (leTypeFilsD == VALEUR)
					cout <<"	type valeur"<<endl;
					if (leTypeFilsD == IDENT)
					cout << "	type ident" <<endl;
					*/
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
			Expression * lExpressionMere = instru->getExpression();
			Expressions leType = instru->getExpressionType();
			if (leType == BIN)
			{
				cout << "expression bin"<<endl;
					ExprBinaire* lExpressionFille = (ExprBinaire *)lExpressionMere;
					Expressions leTypeFilsG = lExpressionFille->getGauche()->getExprType();
					if (leTypeFilsG == BIN)
					cout << "	type bin" <<endl;
					if (leTypeFilsG == VALEUR)
					cout <<"	type valeur"<<endl;
					if (leTypeFilsG == IDENT)
					cout << "	type ident" <<endl;
					Expressions leTypeFilsD = lExpressionFille->getDroite()->getExprType();
					if (leTypeFilsD == BIN)
					cout << "	type bin" <<endl;
					if (leTypeFilsD == VALEUR)
					cout <<"	type valeur"<<endl;
					if (leTypeFilsD == IDENT)
					cout << "	type ident" <<endl;
			}
			if (leType == PAR)
			{
				cout << "expression paranthesee"<<endl;
					ExprPar* lExpressionFille = (ExprPar *)lExpressionMere;
					/*
					Expressions leTypeFilsG = lExpressionFille->getGauche()->getExprType();
					if (leTypeFilsG == BIN)
					cout << "	type bin" <<endl;
					if (leTypeFilsG == VALEUR)
					cout <<"	type valeur"<<endl;
					if (leTypeFilsG == IDENT)
					cout << "	type ident" <<endl;
					Expressions leTypeFilsD = lExpressionFille->getDroite()->getExprType();
					if (leTypeFilsD == BIN)
					cout << "	type bin" <<endl;
					if (leTypeFilsD == VALEUR)
					cout <<"	type valeur"<<endl;
					if (leTypeFilsD == IDENT)
					cout << "	type ident" <<endl;
					*/
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
