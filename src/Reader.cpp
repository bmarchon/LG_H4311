#include "Reader.h"


Reader::Reader()
{
	//ctor
}

Reader::~Reader()
{
	//dtor
}

char Reader::next() {
	if (filetext.size() != 0)
		return filetext.at(0);
	else
		return '$';
}

char Reader::shift() {
	char res = next();
	
	if (filetext.size() != 0)
		filetext.erase (0,1);
	return res;
}

void Reader::lire(string filename) {
	
	fstream file (filename.c_str());
	
	if (file) {
		// get length of file:
		file.seekg (0, file.end);
		int length = file.tellg();
		file.seekg (0, file.beg);

		char * buffer = new char [length];
		// read data as a block:
		file.read (buffer,length);
		 
		file.close();
		filetext = string(buffer);
		delete[] buffer;
	}
}

string Reader::getFileText(){
    return filetext;
}


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
// pour tester le reader  
int main (){
	Reader * r = new Reader();
	
	r->lire("../../tmp/test.txt");
	cout << r->next() << endl;
	cout << r->shift()  << endl;
	cout << r->next() << endl;
	
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