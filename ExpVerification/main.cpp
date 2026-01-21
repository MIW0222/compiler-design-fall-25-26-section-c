#include <iostream>
#include <string>
#include "check1.h"
#include "check2.h"
#include "check3.h"
#include "check4.h"
using namespace std;

int main()
{
    string in;
    string ch;
    while (true)
    {
        cout << "Check for:";
        cout << "\n1. a*\n2. (a+b)\n3. (a+b)*\n4. (a+b)*c(a+b)(bb+aa)\n5. Exit";
        cout << "\nChoice: ";
        getline(cin,ch);
        if(ch == "5")
            break;

        if(ch=="1")
        {
            cout<<"Input: ";
            getline(cin,in);
            if(in=="exit")
            {
                continue;
            }
            check1A(in);
        }

        if(ch=="2")
        {
            cout<<"Input: ";
            getline(cin,in);
            if(in=="exit")
            {
                continue;
            }
            check2A(in);
        }

        if(ch=="3")
        {
            cout<<"Input: ";
            getline(cin,in);
            if(in=="exit")
            {
                continue;
            }
            check3A(in);
        }

        if(ch=="4")
        {
            cout<<"Input: ";
            getline(cin,in);
            if(in=="exit")
            {
                continue;
            }
            check4A(in);
        }
    }
    return 0;
}
