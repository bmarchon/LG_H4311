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

/* pour tester le reader  
int main (){
	Reader * r = new Reader();
	
	r->lire("../../tmp/test.txt");
	cout << r->next() << endl;
	cout << r->shift()  << endl;
	cout << r->next() << endl;
	delete r;
	return 4;
}*/
