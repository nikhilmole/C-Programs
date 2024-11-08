#include<iostream>
using namespace std;

int Freq(int Arr[], int iLength, int iNum)
{
    int i = 0;
    int iCnt = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNum)
        {
            iCnt++;
        }
    }
    return iCnt;
}
int main()
{
    int i = 0;
    int iSize = 0;
    int *P = NULL;
    int iNo = 0;
    int iRet = 0;

    cout<<"How many numbers you want to add in array : "<<endl;
    cin>>iSize;

    P = new int[iSize];

    if(P == NULL)
    {
        cout<<"Unable to allocte the memory"<<endl;
        return -1;
    }
    cout<<"Enter the numbers : "<<endl;
    for(i = 0; i < iSize; i++)
    {
        cin>>P[i];
    }

    cout<<"enter number you want get frequency : "<<endl;
    cin>>iNo;

    iRet = Freq(P, iSize, iNo);

    cout<<"Freq of "<<iNo<<"is : "<<iRet;
    delete []P;

    return 0;
}