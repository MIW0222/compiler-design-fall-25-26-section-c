#include<iostream>
#include<string>
#include<fstream>
using namespace std;

bool isConst()
{
    string c;
    cout<<"Enter input: ";
    cin>>c;
    for(int i=0;i<c.length();i++)
    {
        if(c[i]>47 && c[i]<58)
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int checkConstA()
{
    bool num = isConst();
    if(num)
    {
        cout<<"It is a number"<<endl;
    }
    else
    {
        cout<<"It is not a number"<<endl;
    }
}

