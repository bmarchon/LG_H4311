#include "AnalyseurLexical.h"




static pair<Symboles, boost::regex>regexes [] =
{
	make_pair(VAR, boost::regex ("^var ") ),
	make_pair(CONST, boost::regex ("^const ") ),
	make_pair(VAL, boost::regex ("^[0-9]+(\\.[0-9]+)?") ),
	
	make_pair(ECRIRE, boost::regex ("^ecrire ") ),
	make_pair(ID, boost::regex ("^[a-zA-Z][a-zA-Z0-9]*") ),
	make_pair(LIRE, boost::regex ("^lire ") ),
	make_pair(PF, boost::regex ("^\\)") ),
	make_pair(PLUS, boost::regex ("^\\+") ),
	make_pair(MOINS, boost::regex ("^-") ),
	make_pair(FOIS, boost::regex ("^\\*") ),
	make_pair(DIVISE, boost::regex ("^/") ),
	make_pair(PV, boost::regex ("^;") ),
	make_pair(PO, boost::regex ("^\\(") ),
	make_pair(EG, boost::regex ("^=") ),
	make_pair(V, boost::regex ("^,") )
} ;

AnalyseurLexical::AnalyseurLexical(string filename)
{
	Reader reader ;
	reader.lire("../tmp/test.txt");
	text = reader.getFileText();

}

AnalyseurLexical::~AnalyseurLexical()
{
	//dtor
}


Symbole * AnalyseurLexical::next()
{
	return NULL;
}

Symbole  * AnalyseurLexical::shift()
{
	return NULL;
}


Symbole * AnalyseurLexical::getSymbole()
{

	cout << text << endl;
	boost::match_results<string::const_iterator> results;
	while (boost::regex_search(text, results, boost::regex ("^ "))) {//regex matches
		text.erase(0, 1);
	}

	if(text.size() == 0)
	{
		cout << "end of file reached" << endl;
		return new Symbole(END);
	}
	//TODO : add boolean end of file (set to true when shift on dollar)


	for( auto regPair : regexes)
	{

		if(boost::regex_search(text, results, regPair.second)) //regex matches
		{
			cout << regPair.first << " matches : " << results << endl	;
			text.erase(0,string(results[0]).size());
			return new Symbole(regPair.first);
		}
		/*else{
			cout << regPair.first << " does not match" << endl;
		}*/
	}
		return NULL;
}



// pour tester le AnalyseurLexical  
int main ()
{
	
	AnalyseurLexical * r = new AnalyseurLexical("../../tmp/test.txt");
	
	r->getSymbole();
	r->getSymbole();
	r->getSymbole();
	r->getSymbole();
	r->getSymbole();
	r->getSymbole();
	r->getSymbole();
	r->getSymbole();
	r->getSymbole();
	r->getSymbole();

	delete r;
	return 0;
}

