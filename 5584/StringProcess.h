#ifndef STRING_PROCESS_H
#define STRING_PROCESS_H

#include <string>
#include <sstream>
using namespace std;

class StringProcess
{
private:
    string str;

public:
    StringProcess(string);
    string reverse_str();
    string getEvenChars();
    string getOddChars();
    int upper_count();
    int lower_count();
};

#endif