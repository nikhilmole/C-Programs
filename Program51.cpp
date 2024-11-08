#include<iostream>
using namespace std;

int DigiMulti(int iNum)
{
    int iDigit = 0;
    int Freq = 0;
    int iMulti = 1;
    if(iNum < 0)
    {
        iNum = -iNum;
    }

    while(iNum > 0)
    {
        iDigit = iNum % 10;
        iMulti = iMulti * iDigit;
        iNum = iNum / 10;
    }
    return iMulti;
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iNo;

    iRet = DigiMulti(iNo);
    cout<<iRet;

    return 0;
}1