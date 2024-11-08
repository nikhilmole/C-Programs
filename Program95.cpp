#include<iostream>
using namespace std;

int Freq(int Arr[], int iLength)
{
    int i = 0;
    int iCnt = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == 11)
        {
            iCnt++;
        }
    }
    return iCnt;
}
int main()
{
    int i = 0;
    int *P = NULL;
    int iRet = 0;
    int iSize = 0;

    cout<<"How many numbers you want to add : "<<endl;
    cin>>iSize;

    P = new int[iSize];

    cout<<"Enter the number : "<<endl;
    for(i = 0; i < iSize; i++)
    {
        cin>>P[i];
    }   
    iRet = Freq(P, iSize);

    cout<<iRet;

    return 0;
}