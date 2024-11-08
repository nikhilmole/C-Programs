#include<iostream>
using namespace std;

void Pattern(int iNum)
{
    int i = 0;
    if(iNum < 0)
    {
        iNum = -iNum;
    }
    for(i = iNum; i > 0; i--)
    {
        cout<<i<<"  #  ";
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