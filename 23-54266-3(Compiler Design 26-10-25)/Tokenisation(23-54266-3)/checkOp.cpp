#include<iostream>
#include<string>
#include<fstream>
using namespace std;

bool isOp()
{
    char op[6]={'+','-','*','/','%','='};
    string c;
    cout<<"Enter input: ";
    cin>>c;

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

int checkOpA()
{
    if(!isOp())
        {
            cout<<"No operators found."<<endl;
        }
}
