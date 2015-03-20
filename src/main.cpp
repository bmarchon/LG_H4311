#include "main.h"
#include <iostream>
#include <stdio.h>

//options activation
static bool optionP = false;
static bool optionO = false;
static bool optionA = false;
static bool optionE = false;

static void checkOptions(int& argc, const char* argv[])
{
	for(int i = 1 ; i < argc-1 ; i++) // first parameter is program path, last parameter must be file name
	{
		if(strcmp(argv[i],"-p") == 0)
		{
			optionP = true;
		}
		else if(strcmp(argv[i],"-o") == 0)
		{
			optionO = true;
		}
		else if(strcmp(argv[i],"-a") == 0)
		{
			optionA = true;
		}
		else if(strcmp(argv[i],"-e") == 0)
		{
			optionE = true;
		}else
		{
			cout << "invalid option: " << argv[i] << endl; 
		}
	}
}

static string filename(int argc, const char* argv[])
{
	if(argc < 2)
	{
		return string("no input file name specified");
	}
	else
	{
		string res = string(argv[argc-1]);
		int size = res.size();
		if(size < 4 ||  res.substr(size-3).compare(".lt") != 0) //file must end with .lt
		{
			return string("invalid file name : " + res + " (filename must end with .lt)");
		}else{
			return res;
		}
	}
}

int main( int argc, const char* argv[] )
{
	cout << programName << " version " << version << endl << endl;
	cout << man << endl;
	checkOptions(argc,argv); //get activated options

	AnalyseurLexical* lex = new AnalyseurLexical(filename(argc,argv));
	//TODO syntax analysis

	delete lex;
	return 0;
}