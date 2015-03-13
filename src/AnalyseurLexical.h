#ifndef ANALYSEUR_LEXICAL_H
#define ANALYSEUR_LEXICAL_H

#include <string>
#include <boost/regex.hpp>
#include "Symbole.h"

using namespace std;

class AnalyseurLexical
{
	public:
		AnalyseurLexical();
		virtual ~AnalyseurLexical();
		Symbole next();
		Symbole shift();

};

#endif // READER_H
