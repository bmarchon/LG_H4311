/**
  This class represents the lexical analizer, containing all regexes
  that match any possible Symbol. It crawls files and returns them
*/

#include "LexicalAnalyzer.h"

//regexes for all terminal symbols
static pair<Symbols, boost::regex>regexes [] =
{
    make_pair(VAR, boost::regex ("^var\\s")),
    make_pair(CONST, boost::regex ("^const\\s")),
    make_pair(VAL, boost::regex ("^[0-9]+(\\.[0-9]+)?")),
    make_pair(ECRIRE, boost::regex ("^ecrire\\s")),
    make_pair(LIRE, boost::regex ("^lire\\s")),
    make_pair(PF, boost::regex ("^\\)")),
    make_pair(PLUS, boost::regex ("^\\+")),
    make_pair(MOINS, boost::regex ("^-")),
    make_pair(FOIS, boost::regex ("^\\*")),
    make_pair(DIVISE, boost::regex ("^/")),
    make_pair(PV, boost::regex ("^;")),
    make_pair(PO, boost::regex ("^\\(")),
    make_pair(EG, boost::regex ("^=")),
    make_pair(V, boost::regex ("^,")),
    make_pair(AFFECT, boost::regex("^:=")),
    make_pair(ID, boost::regex ("^[a-zA-Z][a-zA-Z0-9]*")) //has to be at the end (otherwise can be ambiguous with key words: lire, ecrire, var, const)
} ;

/**
    Constructor of LexicalAnalyzer. Reads file content of filename
    and finds first symbol.
*/
LexicalAnalyzer::LexicalAnalyzer(string filename)
{
    this->content = FileReader::read(filename);
    this->endReached = false; //has to be called before getSymbole!
    this->currentSymbol = shift();
}

/**
    Destructor for LexicalAnalyser
*/
LexicalAnalyzer::~LexicalAnalyzer()
{
    //deletes???
}

// TO-DO prevent NULL bzw can it really be NULL?

/**
    Returns next symbol to read. Can be NULL when
    lexical error occurs
*/
Symbol * LexicalAnalyzer::getCurrentSymbol()
{
    return this->currentSymbol;
}

/**
    Crawls text to get and set next symbol
*/
Symbol * LexicalAnalyzer::shift()
{
    do
    {
    // TO-DO really necessary??
        //if end of stream already reached, return current symbol
/*        if (endReached)
        {
            return = currentSym;
        }*/

        //skip blanks at the beginning if any
        trim(this->content);

        if (this->content.size() == 0)
        {
            //end of file reached
            endReached = true;
            this->currentSymbol = new SymbolSimple(END);
            return this->currentSymbol;
        }

        boost::match_results<string::const_iterator> results;
        for (auto regPair : regexes)
        {
            if(boost::regex_search(this->content, results, regPair.second))
            {
                //regex matches
                string match = string(results[0]);
                //remove matching part from stream
                this->content.erase(0,match.size());

                Symbol * res;
                if(regPair.first == VAL)
                {
                    this->currentSymbol = new Val(atof(match.c_str()));
                    return this->currentSymbol;
                }
                else if(regPair.first == ID)
                {
                    this->currentSymbol = new Identifier(match);
                    return this->currentSymbol;
                }
                else
                {
                    this->currentSymbol = new SymbolSimple(regPair.first);
                    return this->currentSymbol;
                    //res->getType(); cout << endl;
                }
            }
        }   
        cout << "lexical error : removing unknown symbol '" << this->content[0] << "'" << endl;
        this->content.erase(0, 1);
        this->currentSymbol = NULL; //error
    }
    while (this->currentSymbol == NULL);
}
