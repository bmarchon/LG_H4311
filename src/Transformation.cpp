#include "Transformation.h"

Transformation::Transformation(Programme * prog)
{
	//ctor
	this->programme = prog;
}

Transformation::~Transformation()
{
	//dtor
}

Programme * Transformation::getProgramme()
{
	return this->programme;
}

void Transformation::transformer()
{ /*
	cout << endl;
	cout <<"transformation--------------------------------------------" << endl;
	//Programme * leProgramme=getProgramme();
	//leProgramme.afficher();
	*/
	vector<Instruction*> instructions = this->programme->getInstructions();
	for(auto it = instructions.begin(); it != instructions.end(); ++it)
	{
		if ((*it)->getInstType() == ECR)
		{
			InstructionEcriture* inst = (InstructionEcriture*) (*it);
			Expression  * expSimplifiee = simplifier(inst->getExpression());
			inst->setExpression(expSimplifiee);
		}
		else if ((*it)->getInstType() == AFF)
		{
			InstructionAffectation* inst = (InstructionAffectation*) (*it);
			Expression  * expSimplifiee = simplifier(inst->getExpression());
			inst->setExpression(expSimplifiee);
		}
	}


	/*
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
	}*/
	}

//Fonction appelée récursivement
	Expression * Transformation::simplifier(Expression * exp)
	{	

		Expression * res;
		Expressions type = exp->getExprType();

		if(type == VALEUR || type == IDENT)
		{
			res = exp;
		}
		else if(type == PAR)
		{
			ExprPar * expPar = (ExprPar*) exp;
			res = expPar->getExpression();
		}
		else if(type == BIN)
		{
			ExprBinaire * expBin = (ExprBinaire*) exp;
			char op = expBin->operateur();
			if (op == '+')
			{
				ExprAdd* expAdd = (ExprAdd*) exp;
				Expression * gauche = expAdd->getGauche();
				Expression * droite = expAdd->getDroite();

				if(is0Const(gauche))
				{
					
					res = simplifier(droite);

				}else if(is0Const(droite))
				{
					res = simplifier(gauche);
				}
				cout << "simplification d'une addition : ";
				expAdd->afficher(); 
				cout << " => " ;
				res->afficher();
				cout << endl;
			}
			else
			{

			//TODO - , * , /
				cout << "error : unexpected operator in transformation : " << op << endl;
			}
		}
		else
		{
			cout << "error : unexpected expression type in transformation : " << type << endl;
			res = NULL;
		}
		return res;
	}

	bool Transformation::is0Const(Expression * exp)
	{
		return ((exp->getExprType() == VALEUR) && (exp->eval() == 0.0));
	}

	bool Transformation::is1Const(Expression * exp)
	{
		return ((exp->getExprType() == VALEUR) && (exp->eval() == 1.0));
	}

/*
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
			//double valeur = lExpressionFilleCastee->eval();
			//cout <<"Valeur : "<<valeur<<endl;
			lExpressionMere->setExpression(lExpressionFilleG);
			cout <<"lExpressionMere->getExpression() : "<<lExpressionMere->getExpression()<<endl; 
			//valeur = lExpressionMere->getExpression()->eval();
			//cout <<"Valeur : "<<valeur<<endl;
		}
		else if (lExpressionFilleCastee->eval() == lExpressionFilleD->eval())
		{
			cout <<"expression droite egale"<<endl;
			cout <<"lExpressionMere : "<<lExpressionMere<<endl;
			cout <<"lExpressionMere->getExpression() : "<<lExpressionMere->getExpression()<<endl;
			//if (lExpressionMere->getExprType() == BIN) cout << "bin"<<endl;
			//double valeur = lExpressionFilleCastee->eval();
			//cout <<"Valeur : "<<valeur<<endl;
			lExpressionMere->setExpression(lExpressionFilleD);
			// trace : cout <<"lExpressionMere->getExpression() : "<<lExpressionMere->getExpression()<<endl; 
			//valeur = lExpressionFilleD->getExpression()->eval();
			//cout <<"Valeur : "<<valeur<<endl; 
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
*/

