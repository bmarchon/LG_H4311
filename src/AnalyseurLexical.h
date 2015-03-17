#ifndef ANALYSEUR_LEXICAL_H
#define ANALYSEUR_LEXICAL_H


#include <string>
#include <boost/regex.hpp>
#include "Symbole.h"
#include <list>
#include "Reader.h"



using namespace std;

class AnalyseurLexical
{
	public:
		AnalyseurLexical(string filename);
		virtual ~AnalyseurLexical();
		Symbole * next();
		Symbole * shift();
		Symbole * getSymbole();

	private:
		string text;


};

#endif // ANALYSEUR_LEXICAL_H
