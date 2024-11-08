#include<iostream>
using namespace std;

void Factorial(int iNum)
{
    int i = 0;

    for(i = 1; i <= iNum/2; i++)
    {
        if(iNum % i == 0)
        {
            cout<<i<<endl;
        }
    }
}
int main()
{   
    int iNo = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iNo;

    Factorial(iNo);

    return 0;
}