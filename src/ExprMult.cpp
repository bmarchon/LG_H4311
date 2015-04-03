#include "ExprMult.h"

double ExprMult::eval()
{
    double res;
    switch(getOperator()->getChar())	
	{
		case '*':
			res = getLeft()->eval() * getRight()->eval();
			break;
		case '/':
			if(getRight()->eval() != 0.0)
			{
				res = getLeft()->eval() / getRight()->eval();
			}
			else
			{
				res = 0.0;
				cout << "division by 0, result has been set to 0" << endl;
			}
			break;
		default :
			res = 0.0;
			cout << "error in evaluating multiplicative expression" << endl;
	}
	return res;
}

void ExprMult::print()
{
    getLeft()->print();
	getOperator()->print();
    getRight()->print();
}
