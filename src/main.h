#ifndef MAIN_H
#define MAIN_H

#include <string>
#include "AnalyseurLexical.h"

using namespace std;

const string programName = "Interpreter lutin";
const string version = "1.0";
const string man = string("Utilisation : lut [-a] [-e] [-o] [-p] file.lt \n"
"-a option : static error analysis \n"
"-e option : execute program \n"
"-o option : transform for simplification \n"
"-p option : display program \n");

#endif // MAIN_H