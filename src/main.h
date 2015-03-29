#ifndef MAIN_H
#define MAIN_H

#include <string>
#include "AnalyseurLexical.h"

using namespace std;

const string programName = "Interpreter lutin";
const string version = "1.0";
const string man = string("Usage : lut [-a] [-e] [-o] [-p] file.lt \n"
"-a option : static error analysis \n"
"-e option : execute program \n"
"-o option : transform for simplification \n"
"-p option : display program \n");

const int OK = 0;
const int FILE_ERROR = 1;
const int LEXICAL_ERROR = 2;
const int SYNTAX_ERROR = 3;
const int INPUT_PARAMETER_ERROR = 4;


#endif // MAIN_H
