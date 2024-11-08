#include<iostream>
using namespace std;

int OddEvenSum(int iNum)
{
    int iDigit = 0;
    int Freq = 0;
    int EvenSum = 0;
    int OddSum = 0;

    if(iNum < 0)
    {
        iNum = -iNum;
    }

    while(iNum > 0)
    {
        iDigit = iNum % 10;
        if(iDigit % 2 == 0)
        {
            EvenSum = EvenSum + iDigit;
        }
        else
        {
            OddSum = OddSum + iDigit;
        }
        iNum = iNum / 10;

    }
    return EvenSum - OddSum;
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iNo;

    iRet = OddEvenSum(iNo);
    cout<<iRet;

    return 0;
}