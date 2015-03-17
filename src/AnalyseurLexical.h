#ifndef ANALYSEUR_LEXICAL_H
#define ANALYSEUR_LEXICAL_H


#include <string>
#include <boost/regex.hpp>
#include <list>

#include "Symbole.h"
#include "Reader.h"

using namespace std;

class AnalyseurLexical
{
	public:
		AnalyseurLexical(string filename);
		virtual ~AnalyseurLexical();
		Symbole * next(); //returns next symbol to read
		Symbole * shift(); //returns and consumes next symbol to read
		

	private:
		string text;
		Symbole * currentSym;
		Symbole * getSymbole();
		bool endReached;


};

#endif // ANALYSEUR_LEXICAL_H
