#include<iostream>
using namespace std;

void DisplayDigit(int iNum)
{
    int iDigit = 0;

    if(iNum < 0)
    {
        iNum = -iNum;
    }
    while(iNum > 0)
    {
        iDigit = iNum % 10;
        cout<<iDigit<<endl;
        iNum = iNum / 10;
    }
}
int main()
{
    int iNo = 0;

    cout<<"Enter the number : ";
    cin>>iNo;

    DisplayDigit(iNo);

    return 0;
}