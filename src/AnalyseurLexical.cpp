#include "AnalyseurLexical.h"


AnalyseurLexical::AnalyseurLexical()
{
	//ctor
}

AnalyseurLexical::~AnalyseurLexical()
{
	//dtor
}


Symbole AnalyseurLexical::next()
{
	
};

Symbole AnalyseurLexical::next()
{
	
};

bool isId (string input){
	
	static const boost::regex e("[a-zA-Z][a-zA-Z0-9]*"); 
	boost::match_results<string::const_iterator> results;
	return boost::regex_match(input, results, e);
}

bool isNum (string input){
	
	static const boost::regex e("[0-9]+(\.[0-9]+)?"); 
	boost::match_results<string::const_iterator> results;
	return boost::regex_match(input, results, e);
}

/*
// pour tester le AnalyseurLexical  
int main (){
	AnalyseurLexical * r = new AnalyseurLexical();
	
	
	
	cout << isId("a4Gfeze8") << endl; //true
	cout << isId("4Gfeze8") << endl; //false
	cout << isId("%4Gfeze8") << endl; //false
	cout << isId(" ") << endl; //false
	cout << isId("a") << endl; //true
	cout << isId("") << endl; //false
	cout << endl;
	cout << isNum("0") << endl; //true
	cout << isNum("14") << endl; //true
	cout << isNum("14.0") << endl; //true
	cout << isNum("14.59189618") << endl; //true
	cout << isNum(".5") << endl; //false
	cout << isNum(".") << endl; //false
	cout << isNum("a") << endl; //false
	cout << isNum("14.a") << endl; //false
	
	delete r;
	return 0;
}
*/
