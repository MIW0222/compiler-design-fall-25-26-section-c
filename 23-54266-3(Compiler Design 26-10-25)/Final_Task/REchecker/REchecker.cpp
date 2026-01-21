#include <iostream>
#include <string>
#include "REchecker.h"
using namespace std;

bool checkStr(string in)
{
    int i = 0;
    int n = in.length();

    while (i < n && in[i] == 'b')
    i++;

    if (i >= n || in[i] != 'a')
    {
        return false;
    }
    i++;

    while (i < n)
    {
        if (in[i] == 'a')
        {
            i++;
        }
        else if (i + 2 < n && in[i] == 'b' && in[i + 1] == 'a' && (in[i + 2] == 'a' || in[i + 2] == 'b'))
        {
            i += 3;
        }
        else
        {
            return false;
        }
    }

    return true;
}

int REcheckerA(string in)
{
    if (checkStr(in))
        cout << "Valid string for b*a[a+ba(a+b)]*." << endl;
    else
        cout << "Invalid string for b*a[a+ba(a+b)]*." << endl;

    return 0;
}
