#ifndef READER_H
#define READER_H

#include <string>
#include <iostream>     // std::cout
#include <fstream>      // std::ifstream

using namespace std;

class Reader
{
	public:
		Reader();
		virtual ~Reader();
		void lire(string filename);
		char next();
		char shift();
	private:
		string filetext;
};

#endif // READER_H
