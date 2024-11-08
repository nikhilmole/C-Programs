#include<iostream>
using namespace std;

bool DisplayDigit(int iNum)
{
    int iDigit = 0;
    bool bFlag = false;

    if(iNum < 0)
    {
        iNum = -iNum;
    }
    while(iNum > 0)
    {
        iDigit = iNum % 10;
        iNum = iNum / 10;

        if(iDigit == 0)
        {
            bFlag = true;
        }
    }
    return bFlag;
}
int main()
{
    int iNo = 0;
    bool bRet = false;

    cout<<"Enter the number : ";
    cin>>iNo;

    bRet = DisplayDigit(iNo);
    if(bRet == true)
    {
        cout<<"Zero Available";
    }
    else
    {
        cout<<"No zero";
    }
    return 0;
}