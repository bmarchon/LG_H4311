#ifndef LEXICALANALYZER_H
#define LEXICALANALYZER_H

#include <string>
#include <boost/regex.hpp>
#include <boost/algorithm/string.hpp>
#include <list>

#include "Symbol.h"
#include "SymbolSimple.h"
#include "Identifier.h"
#include "Val.h"
#include "FileReader.h"

using namespace std;
using namespace boost::algorithm;

class LexicalAnalyzer
{
    public:
        LexicalAnalyzer(string filename);
        virtual ~LexicalAnalyzer();
        Symbol * getCurrentSymbol(); //returns next symbol to read, WARNING: can be NULL if lexical error
        Symbol * shift(); //consumes current symbol
    private:
        Symbol * getSymbol();
        Symbol * currentSymbol;
        string content;
        bool endReached;
};

#endif // LEXICALANALYZER_H
