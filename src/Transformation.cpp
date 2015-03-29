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
	cout <<"transformation--------------------------------------------" << endl;
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
			anaExpr(lExpressionMere, lExpressionMere);
		}
		if (instructions[i]-> getInstType() == AFF)
		{
			InstructionAffectation* instru = (InstructionAffectation*)instructions[i];
			Expression * lExpressionMere = instru->getExpression();
			//cout<<"affect"<<endl;
			anaExpr(lExpressionMere, lExpressionMere);
		}
	}
	cout <<"fin de la transformation-----------------------------------------"<< endl;
	for(unsigned int i=0; i<instructions.size(); i++) {
		instructions[i]->afficher();
	}
}

//Fonction appellée récursivement
void Transformation::anaExpr(Expression * lExpressionFille, Expression * lExpressionMere)
{
	//cout <<"dans anaExpr"<<endl;
	Expressions leType = lExpressionFille->getExprType();
	if (leType == BIN)
	{
		cout << "expression bin"<<endl;
		ExprBinaire* lExpressionFilleCastee = (ExprBinaire *)lExpressionFille;
		Expression * lExpressionFilleG = lExpressionFilleCastee->getGauche();
		Expression * lExpressionFilleD = lExpressionFilleCastee->getDroite();
		if (lExpressionFilleCastee->eval() == lExpressionFilleG->eval())
		{
			cout <<"expression gauche egale"<<endl;
			//pb : if (lExpressionMere->getExpression()->getExprType() == BIN) cout << "bin"<<endl;
			cout <<"lExpressionMere : "<<lExpressionMere<<endl;
			cout <<"lExpressionMere->getExpression() : "<<lExpressionMere->getExpression()<<endl;
			//if (lExpressionMere->getExprType() == BIN) cout << "bin"<<endl;
			double valeur = lExpressionFilleCastee->eval();
			cout <<"Valeur : "<<valeur<<endl;
			lExpressionMere->setExpression(lExpressionFilleG);
			cout <<"lExpressionMere->getExpression() : "<<lExpressionMere->getExpression()<<endl; 
			valeur = lExpressionMere->getExpression()->eval();
			cout <<"Valeur : "<<valeur<<endl;
		}
		else if (lExpressionFilleCastee->eval() == lExpressionFilleD->eval())
		{
			cout <<"expression droite egale"<<endl;
			cout <<"lExpressionMere : "<<lExpressionMere<<endl;
			cout <<"lExpressionMere->getExpression() : "<<lExpressionMere->getExpression()<<endl;
			//if (lExpressionMere->getExprType() == BIN) cout << "bin"<<endl;
			double valeur = lExpressionFilleCastee->eval();
			cout <<"Valeur : "<<valeur<<endl;
			lExpressionMere->setExpression(lExpressionFilleD);
			cout <<"lExpressionMere->getExpression() : "<<lExpressionMere->getExpression()<<endl; 
			valeur = lExpressionFilleD->getExpression()->eval();
			cout <<"Valeur : "<<valeur<<endl; 
		}
		else
		{
			cout << "gauche"<<endl;
			anaExpr(lExpressionFilleG, lExpressionFille);
			cout << "droite"<<endl;
			anaExpr(lExpressionFilleD, lExpressionFille);
		}
		
	}
	if (leType == PAR)
	{
		cout << "expression paranthesee"<<endl;
		ExprPar* lExpressionFilleCastee = (ExprPar *)lExpressionFille;
		Expression * nvlExpressionMere = lExpressionFilleCastee->getExpression();
		anaExpr(nvlExpressionMere, lExpressionFille);
	}
	if (leType == VALEUR)
	{
		cout << "valeur"<< " : " <<lExpressionFille->eval()<<endl;

	}
	if (leType == IDENT)
	{
		cout << "identifiant"<<endl;
	}
}
