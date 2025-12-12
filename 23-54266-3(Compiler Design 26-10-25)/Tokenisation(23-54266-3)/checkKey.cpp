#include<iostream>
#include<string>
#include<fstream>
#include "checkKey.h"

using namespace std;

bool isKey(string id)
{
    string key[] = {"int", "float", "double", "char", "return", "if", "else", "for", "while", "do", "break", "continue", "switch", "case", "default", "void", "struct", "static", "const", "class", "public", "private", "protected"};
    int size = sizeof(key)/sizeof(key[0]);
    for(int i = 0; i < size; i++)
    {
        if(id == key[i])
        {
            return true;
        }
    }
    return false;
}

int checkKeyA(string filename)
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
        if(isKey(line))
        {
            cout << "Keyword: " << line << endl;
        }
    }

    return 0;
}
