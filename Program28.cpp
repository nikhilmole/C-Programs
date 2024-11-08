#include<iostream>
using namespace std;

void Table(int iNum)
{
    int i = 0;

    for(i = 1; i <= 10; i++)
    {
        cout<<iNum <<"*"<<i<<"="<<iNum * i<<endl;
    }
}
int main()
{
    int iNo = 0;

    cout<<"Enter the number : ";
    cin>>iNo;

    Table(iNo);

    return 0;
}