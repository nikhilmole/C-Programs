#include<iostream>
using namespace std;

void OddNumber(int iNum)
{
    int i = 0;

    for(i = 1; i <= iNum; i++)
    {
        if(i % 2 != 0)
        {
            cout<<i<<"\t"; 
        }
    }
}
int main()
{
    int iNo = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iNo;

    OddNumber(iNo);

    return 0;
}