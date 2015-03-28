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
			InstructionEcriture* instru = (InstructionEcriture*)instructions[i];
			Expression * lExpressionMere = instru->getExpression();
			//cout <<"ecriture"<<endl;
			anaExpr(lExpressionMere);
		}
		if (instructions[i]-> getInstType() == AFF)
		{
			InstructionAffectation* instru = (InstructionAffectation*)instructions[i];
			Expression * lExpressionMere = instru->getExpression();
			//cout<<"affect"<<endl;
			anaExpr(lExpressionMere);
		}
	}
	cout <<"fin de la transformation"<< endl;
}

//Fonction appellée récursivement
void Transformation::anaExpr(Expression * lExpressionMere)
{
	Expressions leType = lExpressionMere->getExprType();
	if (leType == BIN)
	{
		//cout << "expression bin"<<endl;
		ExprBinaire* lExpressionFille = (ExprBinaire *)lExpressionMere;
		Expression * lExpressionFilleG = lExpressionFille->getGauche();
		Expression * lExpressionFilleD = lExpressionFille->getDroite();
		//cout << "gauche"<<endl;
		anaExpr(lExpressionFilleG);
		//cout << "droite"<<endl;
		anaExpr(lExpressionFilleD);
	}
	if (leType == PAR)
	{
		//cout << "expression paranthesee"<<endl;
		ExprPar* lExpressionFille = (ExprPar *)lExpressionMere;
		Expression * lExpressionMere = lExpressionFille->getExpression();
		anaExpr(lExpressionMere);
	}
	if (leType == VALEUR)
	{
		//cout << "valeur"<< " : " <<lExpressionMere->eval()<<endl;

	}
	if (leType == IDENT)
	{
		//cout << "identifiant"<<endl;
	}
}
