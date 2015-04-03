#include "Transformation.h"

map<string,double> Transformation::constants;

void Transformation::transform(Program &program)
{

// save map in Programm so that it can be reused

    // get map with all constants and their values for propagation
    vector<Declaration*> declarations = program.getDeclarations();
    for (auto itDeclaration = declarations.begin() ; itDeclaration != declarations.end(); ++itDeclaration)
    {
        if ((*itDeclaration)->getType() == LC)
        {
            vector<Identifier *> decConstants = ((DecConstante*)(*itDeclaration))->getConstants();
            for (auto itconstants = decConstants.begin(); itconstants != decConstants.end(); ++itconstants)
            {
                this->constants.insert(make_pair((*itconstants)->getName(), (*itconstants)->eval()));
            }
        }
    }

    vector<Instruction*> instructions = program.getInstructions();
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
                Expression * gauche = expBin->getLeft();
			          Expression * droite = expBin->getRight();
                if (gauche->getExprType() != VALEUR && gauche->getExprType() != IDENT)
                {
                    gauche = searchTransformations(gauche);
                    expBin->setLeft(gauche);
                }
                if (droite->getExprType() != VALEUR && droite->getExprType() != IDENT)
                {
                    droite = searchTransformations(droite);
                    expBin->setRight(droite);
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

    if (exprBin->getLeft()->getExprType() == VALEUR && exprBin->getRight()->getExprType() == VALEUR)
    {
        return (Expression* ) new Val(exprBin->eval());
    }
    // left side is value, possibility of netral element
    else if (exprBin->getLeft()->getExprType() == VALEUR)
    {
        switch(exprBin->getOperator())
        {
            case '+':
            case '-':
                if (exprBin->getLeft()->eval() == 0.0)
                {
                    return exprBin->getRight();
                }
                else if (exprBin->getRight()->getExprType() == IDENT && (constants.find(((Identifier*)exprBin->getRight())->valeur()) != constants.end()))
                {
                    return (Expression* ) new Val(exprBin->eval());
                }
                return exp;
                break;
            case '*':
            case '/':
                if (exprBin->getLeft()->eval() == 1.0)
                {
                    return exprBin->getRight();
                }
                else if (exprBin->getRight()->getExprType() == IDENT && (constants.find(((Identifier*)exprBin->getRight())->valeur()) != constants.end()))
                {
                    return (Expression* ) new Val(exprBin->eval());
                }
                return exp;
                break;
            default:
                cout << "ERROR: Found operator not expecting: " << exprBin->getOperator() << endl;
                return exp;
        }
    }
    // right side is value, possibility of netral element
    else if (exprBin->getRight()->getExprType() == VALEUR)
    {
        switch(exprBin->getOperator())
        {
            case '+':
            case '-':
                if (exprBin->getRight()->eval() == 0.0)
                {
                    return exprBin->getLeft();
                }
                else if (exprBin->getLeft()->getExprType() == BIN
                    && ((ExprBinaire*)exprBin->getLeft())->getRight()->getExprType() == VALEUR)
                {
                    ExprBinaire * exprBinLeft = (ExprBinaire*)exprBin->getLeft();

                    ExprAdd * exprToEval = new ExprAdd(exprBinGauche->getRight(), new OperateurAdditif(exprBin->getOperator()), exprBin->getRight());
                    Expression * newExpression = (Expression* ) new Val(exprToEval->eval());
                    exprBinLeft->setRight(newExpression);
                    return exprBinLeft;
                }
                else if (exprBin->getLeft()->getExprType() == IDENT && (constants.find(((Identifier*)exprBin->getLeft())->valeur()) != constants.end()))
                {
                    return (Expression* ) new Val(exprBin->eval());
                }
                return exp;
                break;
            case '*':
            case '/':
                if (exprBin->getRight()->eval() == 1.0)
                {
                    return exprBin->getLeft();
                }
                else if (exprBin->getLeft()->getExprType() == BIN
                    && ((ExprBinaire*)exprBin->getLeft())->getRight()->getExprType() == VALEUR)
                {
                    ExprBinaire * exprBinLeft = (ExprBinaire*)exprBin->getLeft();

                    ExprMult * exprToEval = new ExprMult(exprBinGauche->getRight(), new OperateurMultiplicatif(exprBin->getOperator()), exprBin->getRight());
                    Expression * newExpression = (Expression* ) new Val(exprToEval->eval());
                    exprBinLeft->setRight(newExpression);
                    return exprBinLeft;
                }
                else if (exprBin->getLeft()->getExprType() == IDENT && (constants.find(((Identifier*)exprBin->getLeft())->valeur()) != constants.end()))
                {
                    return (Expression* ) new Val(exprBin->eval());
                }
                return exp;
                break;
            default:
                cout << "ERROR: Found operator not expecting: " << exprBin->getOperator() << endl;
                return exp;
        }
        // only Identifier found, propagation possible
    } else {
        if (exprBin->getLeft()->getExprType() == IDENT && (constants.find(((Identifier*)exprBin->getLeft())->valeur()) != constants.end()) && exprBin->getRight()->getExprType() == IDENT && (constants.find(((Identifier*)exprBin->getRight())->valeur()) != constants.end()))
        {
            return (Expression* ) new Val(exprBin->eval());
        }
        return exp;
    }
}
