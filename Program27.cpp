#include<iostream>
using namespace std;

int Factorial(int iNum)
{
    int i = 0;
    int iFacto = 1;

    for(i = 1; i <= iNum; i++)
    {
        iFacto = iFacto * i;
    }
    return iFacto;
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    
    cout<<"Enter the number : "<<endl;
    cin>>iNo;

    iRet = Factorial(iNo);
    cout<<"Factorial is : "<<iRet;
    return 0;
}