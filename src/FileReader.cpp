/**
    This class reads in a file and returns its content
*/

#include "FileReader.h"

string FileReader::read(string filename) throw (string) {
    fstream file (filename.c_str());
    if (file)
    {
        // get length of file
        file.seekg (0, file.end);
        int length = file.tellg();
        file.seekg (0, file.beg);
        char * buffer = new char [length];

        // read data as a block:
        file.read (buffer,length);
        file.close();

        //file content as string
        string filetext = string(buffer);
        delete[] buffer;

        //delete all line breaks
        replace( filetext.begin(), filetext.end(), '\n', ' ');
        replace( filetext.begin(), filetext.end(), '\r', ' ');
        replace( filetext.begin(), filetext.end(), '\t', ' ');
        cout << "file read correctly" << endl;

        return filetext;
    }
    else
    {
        throw ("file error : " + filename + '\n');
    }
}
