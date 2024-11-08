#include<iostream>
using namespace std;

int EvenOddDif(int Arr[], int iLength)
{   
    int i =0;
    int OddCount = 0;
    int EvenCount = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            EvenCount++;
        }
        else
        {
            OddCount++;
        }
    }
    return EvenCount - OddCount;
}

int main()
{
    int i = 0;
    int *P = NULL;
    int iSize; 
    int iRet = 0;

    cout<<"How many number you want to add in array : "<<endl;
    cin>>iSize;

    P = (int*)malloc(iSize * sizeof(int));

    cout<<"Enter the numbers : "<<endl;

    for(i = 0; i < iSize; i++)
    {
        cin>>P[i];
    }   

    iRet = EvenOddDif(P, iSize);

    cout<<iRet;

    delete [] P;
    return 0;
}


