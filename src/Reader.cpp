#include "Reader.h"


Reader::Reader()
{
	//ctor
}

Reader::~Reader()
{
	//dtor
}

/*
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
}*/

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

		//delete all line breaks
		replace( filetext.begin(), filetext.end(), '\n', ' ');
		replace( filetext.begin(), filetext.end(), '\r', ' ');

		cout << "file read correctly" << endl;
		delete[] buffer;
	}else{

	cout << "file error" << endl;
	}
}

string Reader::getFileText()
{
	return filetext;
}


/*

// pour tester le reader  
int main (){
	Reader * r = new Reader();
	
	
	
	delete r;
	
return 0;
}*/