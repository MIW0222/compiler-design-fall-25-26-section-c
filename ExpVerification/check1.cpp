#include <iostream>
#include <string>
#include "check1.h"
using namespace std;

bool checkStr1(string in)
{
    for (char c : in)
    {
        if (c != 'a' || in == "")
            return false;
    }
    return true;
}

int check1A(string in)
{
    if (checkStr1(in))
        cout<<"Valid string for a*."<<endl;
    else
        cout<<"Invalid string for a*."<<endl;

    return 0;
}
