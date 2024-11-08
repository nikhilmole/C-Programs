#include<iostream>
using namespace std;

int EvenFreq(int iNum)
{
    int iDigit = 0;
    int Freq = 0;
    if(iNum < 0)
    {
        iNum = -iNum;
    }

    while(iNum > 0)
    {
        iDigit = iNum % 10;
        iNum = iNum / 10;

        if(iDigit % 2 == 0)
        {
            Freq++;
        }
    }
    return Freq;
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iNo;

    iRet = EvenFreq(iNo);
    cout<<iRet;

    return 0;
}