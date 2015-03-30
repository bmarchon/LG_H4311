
#include "main.h"
#include <iostream>
#include <stdio.h>
#include "Automate.h"
#include "Transformation.h"

//options activation
static bool optionP = false;
static bool optionO = false;
static bool optionA = false;
static bool optionE = false;

static bool checkOptions(int& argc, const char* argv[])
{
    for(int i = 1 ; i < argc-1 ; i++) // first parameter is program path, last parameter must be file name
    {
        bool res = true;
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
            res = false;
        }
    }
}

static string filename(int argc, const char* argv[])
{
    if(argc < 2)
    {

        return string(NO_FILE);
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
    bool syntaxError = false;


    //print program name and help message
    cout << programName << " version " << version << author << endl << endl;
    cout << man << endl;


    if(!checkOptions(argc,argv)) //get activated options
    {
        if(argc < 2)
        {
            cout << NO_FILE << endl;
            return INPUT_PARAMETER_ERROR;
        }
        
    }

    AnalyseurLexical * aLexical = new AnalyseurLexical(filename(argc,argv));

    if(!aLexical->isFileOK())
    {
        return FILE_ERROR;
    }

    Automate * automate = new Automate(aLexical);  

    try{
         automate->analyse();
         

        if(optionA) //static error analysis
        {
            cout << endl << "static analysis:" << endl;
            automate->analyseStatique();
        }
        if(optionO) //transform
        {
           cout << "program transformation enabled" << endl;
           Programme p = automate->getProgramme();
           Transformation::transformer(p);
           automate->getProgramme().afficher();
        }

        if(optionP) //display
        {   
            cout << endl << "program : " << endl << endl;
            automate->getProgramme().afficher();
            cout << endl;
        }

        if(optionE) //execute
        {
            cout << "execution" << endl;
            automate->executer();
        }

    }catch(std::logic_error ex){ //syntax error
        cout << "syntax error : ";
        cout << ex.what() << endl;
        syntaxError = true;
    }

    delete automate;
    delete aLexical; //delete after automate (otherwise causes SIGABRT -> why ??)


    if(syntaxError)
    {
        return SYNTAX_ERROR;
    }

    return OK;
}
