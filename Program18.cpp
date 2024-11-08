#include<iostream>
using namespace std;

void NonFacto(int iNum)
{
    int i = 0;

    if(iNum < 0)
    {
        iNum = -iNum;
    }
    for(i = 1; i < iNum; i++)
    {
        if(iNum % i != 0)
        {
            cout<<"The non factorial name is : "<<i<<endl;
        }
    }
}
int main()
{
    int iNo = 0;
    cout<<"Enter the number : ";
    cin>>iNo;

    NonFacto(iNo);

    return 0;
}