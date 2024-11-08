#include<iostream>
using namespace std;

int NonFactoSum(int iNum)
{
    int i = 0;
    int iSum = 0;

    for(i = 1; i <= iNum; i++)
    {
        if(iNum % i != 0)
        {
            iSum  = iSum + i;
        }
    }
    return iSum;
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iNo;

    iRet = NonFactoSum(iNo);
    cout<<"The summation of Nonfactorial is : "<<iRet;
    return 0;
}