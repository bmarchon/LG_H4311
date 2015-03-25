#ifndef INSTRUCTIONLECTURE_H
#define INSTRUCTIONLECTURE_H
#include "Instruction.h"
#include "Identifiant.h"

#include <iostream>
#include <sstream>


using namespace std;


class InstructionLecture : public Instruction
{
public:
    InstructionLecture(Identifiant * id);
    ~InstructionLecture();
    void executer(map<string, double> &valeurs);

private:
    Identifiant * identifiant;
};

#endif // INSTRUCTIONLECTURE_H
