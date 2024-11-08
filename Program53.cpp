#include<iostream>
using namespace std;

void Pattern(int iNum)
{
    int i = 0;
    char ch = '\0';

    for(i = 1, ch = 'A'; i <= iNum; i++, ch++)
    {
        cout<<ch<<endl;
    }
}
int main()
{
    int iNo = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iNo;

    Pattern(iNo);

    return 0;
}