#include<iostream>
using namespace std;

void Pattern(int iNum)
{
    if(iNum < 50)
    {
        cout<<"Small";
    }
    else if((iNum < 50) && (iNum > 100))
    {
        cout<<"Medium";
    }
    else
    {
        cout<<"Bigger";
    }
}
int main()
{
    int iNo = 0;

    cout<<"Enter the number : ";
    cin>>iNo;

    Pattern(iNo);

    return 0;
}