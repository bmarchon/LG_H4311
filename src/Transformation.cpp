#include "Transformation.h"

map<string,double> Transformation::constantes;

void Transformation::transformer(Programme &programme)
{
    // get map with all constantes and their values for propagation
    vector<Declaration*> declarations = programme.getDeclarations();
    for (auto itDeclaration = declarations.begin() ; itDeclaration != declarations.end(); ++itDeclaration)
    {
        if ((*itDeclaration)->getContenu()->getType() == LC)
        {
            vector<Identifiant *> listeConstante = ((DecConstante*)(*itDeclaration))->getConstantes();
            for (auto itConstantes = listeConstante.begin(); itConstantes != listeConstante.end(); ++itConstantes)
            {
                constantes.insert(make_pair((*itConstantes)->valeur(), (*itConstantes)->eval()));
            }
        }
    }

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
                else if (exprBin->getDroite()->getExprType() == IDENT && (constantes.find(((Identifiant*)exprBin->getDroite())->valeur()) != constantes.end()))
                {
                    return (Expression* ) new Val(exprBin->eval());
                }
                return exp;
                break;
            case '*':
            case '/':
                if (exprBin->getGauche()->eval() == 1.0)
                {
                    return exprBin->getDroite();
                }
                else if (exprBin->getDroite()->getExprType() == IDENT && (constantes.find(((Identifiant*)exprBin->getDroite())->valeur()) != constantes.end()))
                {
                    return (Expression* ) new Val(exprBin->eval());
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
                else if (exprBin->getGauche()->getExprType() == BIN
                    && ((ExprBinaire*)exprBin->getGauche())->getDroite()->getExprType() == VALEUR)
                {
                    ExprBinaire * exprBinGauche = (ExprBinaire*)exprBin->getGauche();

                    ExprAdd * exprToEval = new ExprAdd(exprBinGauche->getDroite(), new OperateurAdditif(exprBin->operateur()), exprBin->getDroite());
                    Expression * newExpression = (Expression* ) new Val(exprToEval->eval());
                    exprBinGauche->setDroite(newExpression);
                    return exprBinGauche;
                }
                else if (exprBin->getGauche()->getExprType() == IDENT && (constantes.find(((Identifiant*)exprBin->getGauche())->valeur()) != constantes.end()))
                {
                    return (Expression* ) new Val(exprBin->eval());
                }
                return exp;
                break;
            case '*':
            case '/':
                if (exprBin->getDroite()->eval() == 1.0)
                {
                    return exprBin->getGauche();
                }
                else if (exprBin->getGauche()->getExprType() == BIN
                    && ((ExprBinaire*)exprBin->getGauche())->getDroite()->getExprType() == VALEUR)
                {
                    ExprBinaire * exprBinGauche = (ExprBinaire*)exprBin->getGauche();

                    ExprMult * exprToEval = new ExprMult(exprBinGauche->getDroite(), new OperateurMultiplicatif(exprBin->operateur()), exprBin->getDroite());
                    Expression * newExpression = (Expression* ) new Val(exprToEval->eval());
                    exprBinGauche->setDroite(newExpression);
                    return exprBinGauche;
                }
                else if (exprBin->getGauche()->getExprType() == IDENT && (constantes.find(((Identifiant*)exprBin->getGauche())->valeur()) != constantes.end()))
                {
                    return (Expression* ) new Val(exprBin->eval());
                }
                return exp;
                break;
            default:
                cout << "ERROR: Found operator not expecting: " << exprBin->operateur() << endl;
                return exp;
        }
        // only Identifier found, propagation possible
    } else {
        if (exprBin->getGauche()->getExprType() == IDENT && (constantes.find(((Identifiant*)exprBin->getGauche())->valeur()) != constantes.end()) && exprBin->getDroite()->getExprType() == IDENT && (constantes.find(((Identifiant*)exprBin->getDroite())->valeur()) != constantes.end()))
        {
            return (Expression* ) new Val(exprBin->eval());
        }
        return exp;
    }
}
