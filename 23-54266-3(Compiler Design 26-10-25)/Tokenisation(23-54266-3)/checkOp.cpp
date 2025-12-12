#include<iostream>
#include<string>
#include<fstream>
#include "checkOp.h"

using namespace std;

bool isOp(string c)
{
    char op[6]={'+','-','*','/','%','='};

    bool foundOp = false;

    for(int i=0;i<c.length();i++)
    {
        for(int j=0;j<6;j++)
        {
            if(c[i]==op[j])
            {
                cout<<"Operator: "<<c[i]<<endl;
                foundOp=true;
            }
        }
    }
    return foundOp;
}

int checkOpA(string filename)
{
    ifstream inputFile(filename.c_str());
    if (!inputFile)
    {
        cout << "No file found." << endl;
        return 1;
    }

    string c;
    bool anyOpFound = false;

    while (getline(inputFile, c))
    {
        bool hasOperator = isOp(c);
        if (hasOperator)
        {
            anyOpFound = true;
        }
    }

    if(!anyOpFound)
    {
        cout<<"No operators found."<<endl;
    }

    return 0;
}
