#include "ExprAdd.h"

double ExprAdd::eval()
{
	double res;
	switch(getOperator()->getChar())	
	{
		case '+':
			res = getLeft()->eval() + getRight()->eval();
			break;
		case '-':
			res = getLeft()->eval() - getRight()->eval();
			break;
		default :
			res = 0.0;
			cout << "error in evaluating additive expression : " << getOperator()->getChar() << endl;
	}
	return res;
}

void ExprAdd::print() {

	getLeft()->print();
    cout << " ";
    getOperator()->print();
    cout << " ";
    getRight()->print();
}
