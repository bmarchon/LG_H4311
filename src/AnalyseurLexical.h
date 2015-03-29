#ifndef ANALYSEUR_LEXICAL_H
#define ANALYSEUR_LEXICAL_H


#include <string>
#include <boost/regex.hpp>
#include <list>

#include "Symbole.h"
#include "SymboleSimple.h"
#include "Identifiant.h"
#include "Val.h"
#include "Reader.h"

using namespace std;

class AnalyseurLexical
{
	public:
		AnalyseurLexical(string filename);
		virtual ~AnalyseurLexical();
		Symbole * next(); //returns next symbol to read, WARNING: can be NULL if lexical error
		void shift(); //consumes current symbol
		bool isFileOK();
		

	private:
		string text;
		Symbole * currentSym;
		Symbole * getSymbole();
		bool fileOK;
		bool endReached;


};

#endif // ANALYSEUR_LEXICAL_H
