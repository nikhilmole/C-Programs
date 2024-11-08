#include<iostream>
using namespace std;

void Multiple(int iNum)
{
    int i = 0;

    for(i = 1; i <= 5; i++)
    {
        cout<<4*i<<endl;
    }
}
int main()
{
    int iNo = 0;

    cout<<"Enter the number : ";
    cin>>iNo;

    Multiple(iNo);

    return 0;
}