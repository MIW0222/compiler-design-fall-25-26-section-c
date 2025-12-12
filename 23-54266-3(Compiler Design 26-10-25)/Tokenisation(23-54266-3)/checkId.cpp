#include<iostream>
#include<string>
#include<fstream>
#include "checkId.h"

using namespace std;

bool isId(string id)
{
    string inv[] = {"int", "float", "double", "char", "return", "if", "else", "for", "while", "do", "break", "continue", "switch", "case", "default", "void", "struct", "static", "const", "class", "public", "private", "protected"};
    int size = sizeof(inv)/sizeof(inv[0]);
    for(int i = 0; i < size; i++)
    {
        if(id == inv[i])
        {
            return false;
        }
    }

    if((id[0]>='A' && id[0]<='Z') || (id[0]>='a' && id[0]<='z') || id[0]=='_')
    {
        for(int i = 1; i < id.length(); i++)
        {
            if(!((id[i]>='A' && id[i]<='Z') || (id[i]>='a' && id[i]<='z') || (id[i]>='0' && id[i]<='9') || id[i]=='_'))
            {
                return false;
            }
        }
        return true;
    }
    return false;
}

int checkIdA(string filename)
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
        if(isId(line))
        {
            cout << "Valid Identifier: " << line << endl;
        }
    }

    return 0;
}
