#include<iostream>
#include<string>
#include<fstream>
#include "checkPunc.h"

using namespace std;

bool isPunc(string c)
{
    int punc[8] = {34,39,40,41,44,46,58,59};
    for(int i=0;i<c.length();i++)
    {
        bool found = false;
        for(int j=0;j<8;j++)
        {
            if(c[i]==punc[j])
            {
                found = true;
                break;
            }
        }

        if(!found)
        {
            return false;
        }
    }
    return true;
}

int checkPuncA(string filename)
{
    ifstream inputFile(filename.c_str());
    if (!inputFile)
    {
        cout << "No file found." << endl;
        return 1;
    }

    string c;
    while (getline(inputFile, c))
    {
        bool num = isPunc(c);
        if (num)
        {
            cout << "Punctuation: " << c << endl;
        }
    }

    return 0;
}
