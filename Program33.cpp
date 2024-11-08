#include<iostream>
using namespace std;


int DifOddEvenFacto(int iNum)
{
    int i =0;
    int iEvenFacto = 1;
    int iOddFacto = 1;

    if(iNum < 0)
    {
        iNum = -iNum;
    }

    for(i = 1; i <= iNum; i++)
    {
        if(i % 2 == 0)
        {
            iEvenFacto = iEvenFacto * i;
        }
        else
        {
            iOddFacto = iOddFacto * i;
        }
    }
    return iEvenFacto - iOddFacto;

}
int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iNo;
    
    iRet = DifOddEvenFacto(iNo);
    cout<<iRet;

    return 0;
}