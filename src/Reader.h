#ifndef READER_H
#define READER_H

#include <string>
#include <iostream>     // std::cout
#include <fstream>      // std::ifstream
#include <regex>
#include <boost/regex.hpp>

using namespace std;

class Reader
{
	public:
		Reader();
		virtual ~Reader();
		void lire(string inputname);
		string getFileText();
		/*char next();
		char shift();*/
	private:
		string filetext;
};

#endif // READER_H
