#include "AnalyseurLexical.h"


//regexes for all terminal symbols
static pair<Symboles, boost::regex>regexes [] =
{
	
	make_pair(VAR, boost::regex ("^var ") ),
	make_pair(CONST, boost::regex ("^const ") ),
	make_pair(VAL, boost::regex ("^[0-9]+(\\.[0-9]+)?") ),
	make_pair(ECRIRE, boost::regex ("^ecrire ") ),
	make_pair(LIRE, boost::regex ("^lire ") ),
	make_pair(PF, boost::regex ("^\\)") ),
	make_pair(PLUS, boost::regex ("^\\+") ),
	make_pair(MOINS, boost::regex ("^-") ),
	make_pair(FOIS, boost::regex ("^\\*") ),
	make_pair(DIVISE, boost::regex ("^/") ),
	make_pair(PV, boost::regex ("^;") ),
	make_pair(PO, boost::regex ("^\\(") ),
	make_pair(EG, boost::regex ("^=") ),
	make_pair(V, boost::regex ("^,") ),
	make_pair(AFFECT, boost::regex("^:=")),
	make_pair(ID, boost::regex ("^[a-zA-Z][a-zA-Z0-9]*") )
	
} ;



AnalyseurLexical::AnalyseurLexical(string filename)
{
	Reader reader ;
	reader.lire(filename);
	text = reader.getFileText();
	currentSym = getSymbole();
	endReached = false;
}

AnalyseurLexical::~AnalyseurLexical()
{
	//dtor
}




Symbole * AnalyseurLexical::next()
{
	return currentSym;
}

Symbole  * AnalyseurLexical::shift()
{
	Symbole * current = currentSym;
	currentSym = getSymbole();
	return current;
}



Symbole * AnalyseurLexical::getSymbole()
{	
	//if end of stream already reached, return current symbol
	if(endReached)
	{
		return currentSym;
	}

	cout << text << endl;

	

	//skip blanks at the beginning if any
	boost::match_results<string::const_iterator> results;
    while (boost::regex_search(text, results, boost::regex ("^ "))) {
		text.erase(0, 1);
	}

	if(text.size() == 0)
	{
			//end of file reached
			endReached = true;
			return new Symbole(END);
	}

    for( auto regPair : regexes)
	{

		if(boost::regex_search(text, results, regPair.second)) 
		{
			//regex matches
			string match = string(results[0]);
			text.erase(0,match.size());

			Symbole * res;
			//cout << match << endl;
			if(regPair.first == VAL)
			{
				res = new Val(atof(match.c_str()));
			}
			else if(regPair.first == ID)
			{
				res = new Identifiant(match);
			}
			else
			{
				res = new SymboleSimple(regPair.first);
			}

			return res;
		}
	}
		cout << "erreur lexicale au caractère: " << text << endl;
		return NULL; //error
}





// pour tester le AnalyseurLexical  
int main ()
{
	
	AnalyseurLexical * r = new AnalyseurLexical("../tmp/test.txt");

	for(int i = 0 ; i < 20 ; i++)
	{
		if(r->shift() != NULL)
		{
			cout << r->shift()->afficherType() << endl;
		}
	}

	delete r;
	return 0;
}
