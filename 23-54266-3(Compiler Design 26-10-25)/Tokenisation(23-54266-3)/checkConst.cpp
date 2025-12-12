#include<iostream>
#include<string>
#include<fstream>
#include "checkConst.h"

using namespace std;

bool isConst(string c)
{
    if(c.empty()) return false;

    for(int i=0; i < c.length(); i++)
    {
        if(c[i] >= '0' && c[i] <= '9')
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int checkConstA(string filename)
{
    ifstream inputFile(filename.c_str());
    if (!inputFile)
    {
        cout << "No file found." << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line))
    {
        bool num = isConst(line);
        if(num)
        {
            cout << "Constant: " << line<< endl;
        }
    }

    return 0;
}
