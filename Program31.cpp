#include<iostream>
using namespace std;

int EvenFactorial(int iNum)
{
    int i = 0;

    int iFacto = 1;

    if(iNum < 0)
    {
        iNum = -iNum;
    }

    for(i = 1; i <= iNum; i++)
    {
        if(i % 2 == 0)
        {
            iFacto = iFacto * i;
        }
    }
    return iFacto;
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Entet the number : ";
    cin>>iNo;

    iRet = EvenFactorial(iNo);
    cout<<iRet;
    return 0;
}