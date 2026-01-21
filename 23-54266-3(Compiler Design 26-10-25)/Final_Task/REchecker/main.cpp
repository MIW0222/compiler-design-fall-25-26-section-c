#include <iostream>
#include <string>
#include "REchecker.h"
using namespace std;

int main()
{
    while (true)
    {
        string str;
        cout<<"RE: b*a[a+ba(a+b)]*" << endl;
        cout<<"Enter string to check: ";
        cin>>str;
        if(str=="exit")
        {
            break;
        }
        REcheckerA(str);
    }
    return 0;
}
