#include <iostream>
#include <string>
using namespace std;

bool checkStr(string in)
{
    int i = 0;
    int n = in.length();

    while (i < n && (in[i] == 'a' || in[i] == 'b'))
        i++;

    if (i >= n || in[i] != 'c')
    {
        return false;
    }
    i++;

    if (i >= n || (in[i] != 'a' && in[i] != 'b'))
    {
        return false;
    }
    i++;

    if (i + 1 >= n)
    {
        return false;
    }

    if ((in[i] == 'b' && in[i + 1] == 'b') || (in[i] == 'a' && in[i + 1] == 'a'))
    {
        i += 2;
    }

    else
    {
        return false;
    }

    return (i == n);
}

int check4A(string in)
{
    if (checkStr(in))
        cout << "Valid string for (a+b)*c(a+b)(bb+aa)." << endl;
    else
        cout << "Invalid string for (a+b)*c(a+b)(bb+aa)." << endl;

    return 0;
}
