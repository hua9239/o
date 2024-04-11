#include "StringProcess.h"

StringProcess::StringProcess(string s) : str(s) {}

string StringProcess::reverse_str()
{
    string result = "";
    stringstream ss(str);
    char c;
    while (ss >> c)
    {
        result = c + result;
    }
    return result;
}

string StringProcess::getEvenChars()
{
    string result = "";
    for (int i = 0; i < str.length(); i += 2)
    {
        result += str[i];
    }
    return result;
}

string StringProcess::getOddChars()
{
    string result = "";
    for (int i = 1; i < str.length(); i += 2)
    {
        result += str[i];
    }
    return result;
}

int StringProcess::upper_count()
{
    int count = 0;
    stringstream ss(str);
    char c;
    for (int i = 0; i < str.length(); i++)
    {
        ss >> c;
        if (isupper(c))
        {
            count++;
        }
    }
    return count;
}

int StringProcess::lower_count()
{
    int count = 0;
    stringstream ss(str);
    char c;
    for (int i = 0; i < str.length(); i++)
    {
        ss >> c;
        if (islower(c))
        {
            count++;
        }
    }
    return count;
}