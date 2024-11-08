#include<iostream>
using namespace std;

void Pattern(int iNum)
{
    int i = 0;

    for(i = 1; i <= iNum; i++)  
    {
        cout<<i<<endl;
    }
}
int main()
{
    int iNo = 0;

    cout<<"enter the number : ";
    cin>>iNo;

    Pattern(iNo);

    return 0;
}