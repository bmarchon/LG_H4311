#ifndef FILEREADER_H
#define FILEREADER_H

#include <string>
#include <iostream>     // std::cout
#include <fstream>      // std::ifstream
#include <regex>

using namespace std;

class FileReader
{
    public:
        static string read(string filename) throw (string);
};

#endif // FILEREADER_H
