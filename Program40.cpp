#include<iostream>
using namespace std;

int RangeAdd(int iNum1, int iNum2)
{
    int i = 0;
    int Ans = 0;

    if(iNum1 > iNum2)
    {
        cout<<"Invalid option";
    }
    for(i = iNum1; i <= iNum2; i++)
    {
        Ans = Ans + i;
    }
    return Ans;
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    cout<<"Enter the first number : ";
    cin>>iNo1;

    cout<<"Enter the Second number : ";
    cin>>iNo2;

    iRet = RangeAdd(iNo1, iNo2);
    if(iNo1 <= iNo2)
    {
        cout<<iRet;
    }
    return 0;
}