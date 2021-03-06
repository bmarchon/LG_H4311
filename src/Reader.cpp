#include "Reader.h"
Reader::Reader()
{
	//ctor
}

Reader::~Reader()
{
	//dtor
}

bool Reader::lire(string filename) {
	fstream file (filename.c_str());
	if (file) {
		// get length of file
		file.seekg (0, file.end);
		int length = file.tellg();
		file.seekg (0, file.beg);
		char * buffer = new char [length];
		// read data as a block:
		file.read (buffer,length);
		file.close();
		//file content as string
		filetext = string(buffer);
		delete[] buffer;
		//delete all line breaks
		replace( filetext.begin(), filetext.end(), '\n', ' ');
		replace( filetext.begin(), filetext.end(), '\r', ' ');
		replace( filetext.begin(), filetext.end(), '\t', ' ');
		cout << "file read correctly" << endl;
		return true;
	}else{
		cout << "file error : " << filename << endl;
		return false;
	}
}

string Reader::getFileText()
{
	return filetext;
}