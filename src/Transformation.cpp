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
{ 
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
		res = simplifier(expPar->getExpression());
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
			}else
			{	
				expAdd->setGauche(simplifier(gauche));
				expAdd->setDroite(simplifier(droite));
				res = expAdd;
			}
		}
		else if(op == '-')
		{

			ExprAdd* expAdd = (ExprAdd*) exp;
			Expression * gauche = expAdd->getGauche();
			Expression * droite = expAdd->getDroite();

			if(is0Const(droite))
			{
				res = simplifier(gauche);
			}else
			{	
				expAdd->setGauche(simplifier(gauche));
				expAdd->setDroite(simplifier(droite));
				res = expAdd;
			}

		}
		else if(op == '*')
		{
			ExprMult* expMult = (ExprMult*) exp;
			Expression * gauche = expMult->getGauche();
			Expression * droite = expMult->getDroite();

			if(is1Const(gauche))
			{
				
				res = simplifier(droite);

			}else if(is1Const(droite))
			{
				res = simplifier(gauche);
			}else
			{	
				expMult->setGauche(simplifier(gauche));
				expMult->setDroite(simplifier(droite));
				res = expMult;
			}
		}
		else if(op == '/')
		{
			ExprMult* expMult = (ExprMult*) exp;
			Expression * gauche = expMult->getGauche();
			Expression * droite = expMult->getDroite();

			if(is1Const(droite))
			{
				res = simplifier(gauche);
			}else
			{	
				expMult->setGauche(simplifier(gauche));
				expMult->setDroite(simplifier(droite));
				res = expMult;
			}
		}
		else
		{
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


