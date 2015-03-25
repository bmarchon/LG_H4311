#include "InstructionLecture.h"

InstructionLecture::InstructionLecture(Identifiant *identifiant):Instruction()
{
    this->identifiant = identifiant;
}

InstructionLecture::~InstructionLecture()
{

}

void InstructionLecture::executer(map<string, double> &valeurs)
{
	string mystr;
	double inputValue = 0.0;
	string inputString;
 
 	cout << "Enter value for " << identifiant->valeur() << endl;
  	getline (cin,inputString);
  	stringstream(inputString) >> inputValue;

  	valeurs.insert(make_pair(identifiant->valeur(),inputValue));
}
