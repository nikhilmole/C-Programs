#include<iostream>
using namespace std;

int Difference(int Arr[], int iLength)
{
    int i = 0;
    int Ans = 0;
    int SumEven = 0;
    int SumOdd = 0;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i]) % 2 == 0)
        {
            SumEven = SumEven + Arr[i];
        }
        else
        {
            SumOdd = SumOdd + Arr[i];
        }
    }
    Ans = SumEven - SumOdd;
    return Ans;
}
int main()
{
    int iSize = 0;
    int *Arr = NULL;
    int i = 0;
    int iRet = 0;

    cout<<"Enter the number of elements : ";
    cin>>iSize;

    Arr = new int[iSize];
    if(Arr == NULL)
    {
        cout<<"unable to allocate the memory"<<endl;
        return -1;
    }
    cout<<"Enter the number of elements : ";
    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }

    iRet = Difference(Arr,iSize);
    cout<<iRet;

    delete []Arr;
    return 0;
}