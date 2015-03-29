#include "InstructionLecture.h"

InstructionLecture::InstructionLecture(Identifiant *identifiant):Instruction(LEC)
{
    this->identifiant = identifiant;
}

InstructionLecture::~InstructionLecture()
{

}

void InstructionLecture::executer()
{
	string mystr;
	double inputValue = 0.0;
	string inputString;
 
 	cout << "Enter value for " << identifiant->valeur() << endl;
  	getline (cin,inputString);
  	stringstream(inputString) >> inputValue;

  	identifiant->setValeurNum(inputValue);
}


void InstructionLecture::afficher() {
	cout << "lire ";
	this->identifiant->afficher();
    cout << ";" << endl;
}
