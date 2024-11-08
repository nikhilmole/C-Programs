#include<iostream>
using namespace std;

void Pattern(int iNum)
{
    int i = 0;

    for(i = 1; i <= iNum; i++)
    {
        cout<<i * 2<<endl;
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