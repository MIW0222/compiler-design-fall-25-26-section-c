#include <iostream>
#include <string>
#include "checkPunc.h"
#include "checkOp.h"
#include "checkId.h"
#include "checkKey.h"
#include "checkConst.h"

using namespace std;

int main()
{
    string filename;
    cout<<"Enter file name: ";
    cin>>filename;
    checkPuncA(filename);
    checkOpA(filename);
    checkIdA(filename);
    checkKeyA(filename);
    checkConstA(filename);
    return 0;
}
