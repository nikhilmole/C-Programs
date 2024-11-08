#include<iostream>
using namespace std;

void Evennumber(int iNum)
{
    int i = 0;

    for(i = 1; i <= iNum/2; i++)
    {
        if(i % 2 == 0)
        {
            if(iNum % i == 0)
            {
                cout<<i<<endl;
            }
        }
    }
}
int main()
{
    int iNo = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iNo;

    Evennumber(iNo);

    return 0;
}