#include <iostream>
#include <string>
#include "check3.h"
using namespace std;

bool checkStr3(string in)
{
    for (char c : in)
    {
        if (!(c == 'a' || c == 'b'))
            return false;
    }
    return true;
}

int check3A(string in)
{
    if (checkStr3(in))
        cout<<"Valid string for (a+b)*."<<endl;
    else
        cout<<"Invalid string for (a+b)*."<<endl;

    return 0;
}
