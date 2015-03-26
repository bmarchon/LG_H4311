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
    void executer();
    void afficher(); // Display the value for the representation
private:
    Identifiant * identifiant;
};

#endif // INSTRUCTIONLECTURE_H
