#include <iostream>
#include <string>
#include "check2.h"
using namespace std;

bool checkStr2(string in)
{
    if(in=="a" || in=="b")
        return true;
    return false;
}

int check2A(string in)
{
    if (checkStr2(in))
        cout<<"Valid string for (a+b)."<<endl;
    else
        cout<<"Invalid string for (a+b)."<<endl;

    return 0;
}
