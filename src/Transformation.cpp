#include "Transformation.h"

void Transformation::transformer(Programme &programme)
{
	vector<Instruction*> instructions = programme.getInstructions();
	for(auto it = instructions.begin(); it != instructions.end(); ++it)
	{
		if ((*it)->getInstType() == ECR)
		{
			InstructionEcriture* inst = (InstructionEcriture*) (*it);
			inst->setExpression(searchTransformations(inst->getExpression()));
		}
		else if ((*it)->getInstType() == AFF)
		{
			InstructionAffectation* inst = (InstructionAffectation*) (*it);
			inst->setExpression(searchTransformations(inst->getExpression()));
		}
	}
}

//Fonction appelée récursivement
Expression * Transformation::searchTransformations(Expression * exp)
{
    switch(exp->getExprType())
    {
        case PAR:
            {
                Expression * parExpr = ((ExprPar*)exp)->getExpression();
                exp = searchTransformations(parExpr);
                if (parExpr->getExprType() == VALEUR || parExpr->getExprType() == IDENT)
                {
                    exp = parExpr;
                }
                return exp;
            }
            break;
        case BIN:
            {
                ExprBinaire * expBin = (ExprBinaire*) exp;
                Expression * gauche = expBin->getGauche();
			          Expression * droite = expBin->getDroite();
                if (gauche->getExprType() != VALEUR && gauche->getExprType() != IDENT)
                {
                    gauche = searchTransformations(gauche);
                    expBin->setGauche(gauche);
                }
                if (droite->getExprType() != VALEUR && droite->getExprType() != IDENT)
                {
                    droite = searchTransformations(droite);
                    expBin->setDroite(droite);
                }
                return simplifier(exp);
            }
            break;
        default:
            return exp;
    }
}

// should work as void, no idea why it doesnt ...
Expression * Transformation::simplifier(Expression * exp)
{
    ExprBinaire * exprBin = (ExprBinaire *) exp;
    // both sides are values, can be simplified by evaluating

    if (exprBin->getGauche()->getExprType() == VALEUR && exprBin->getDroite()->getExprType() == VALEUR)
    {
        return (Expression* ) new Val(exprBin->eval());
    }
    // left side is value, possibility of netral element
    else if (exprBin->getGauche()->getExprType() == VALEUR)
    {
        switch(exprBin->operateur())
        {
            case '+':
            case '-':
                if (exprBin->getGauche()->eval() == 0.0)
                {
                    return exprBin->getDroite();
                }
                return exp;
                break;
            case '*':
            case '/':
                if (exprBin->getGauche()->eval() == 1.0)
                {
                    return exprBin->getDroite();
                }
                return exp;
                break;
            default:
                cout << "ERROR: Found operator not expecting: " << exprBin->operateur() << endl;
                return exp;
        }
    }
    // right side is value, possibility of netral element
    else if (exprBin->getDroite()->getExprType() == VALEUR)
    {
        switch(exprBin->operateur())
        {
            case '+':
            case '-':
                if (exprBin->getDroite()->eval() == 0.0)
                {
                    return exprBin->getGauche();
                }
                return exp;
                break;
            case '*':
            case '/':
                if (exprBin->getDroite()->eval() == 1.0)
                {
                    return exprBin->getGauche();
                }
                return exp;
                break;
            default:
                cout << "ERROR: Found operator not expecting: " << exprBin->operateur() << endl;
                return exp;
        }
    } else {
        return exp;
    }
}
