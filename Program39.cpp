#include<iostream>
using namespace std;

void eVENdISPLAY(int iNum1, int iNum2 )
{
    int i = 0;

    for(i = iNum1; i <= iNum2; i++)
    {
        if(i % 2 == 0)
        {
            cout<<i<<endl;
        }
    }
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    cout<<"Enter the first number : ";
    cin>>iNo1;

    cout<<"Enter the second number : ";
    cin>>iNo2;

    eVENdISPLAY(iNo1, iNo2);
    
    return 0;
}