#include<iostream>
using namespace std;

void Divi(int Arr[], int iLength)
{
    int i = 0;

    cout<<"Number divisible by 11 is : "<<<endl;
    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 11 == 0)
        {
            cout<<Arr[i]<<endl;
        }
    }
}
int main()
{
    int iSize = 0;
    int *P = NULL;
    int i = 0;

    cout<<"How many number you want to add in : "<<endl;
    cin>>iSize;

    P = new int[iSize];
    if(P == NULL)
    {
        cout<<"Unable to allocate the memory";
        return -1;
    }

    cout<<"Enter the numbers : "<<endl;

    for(i = 0; i < iSize; i++)
    {
        cin>>P[i];
    }

    Divi(P, iSize);

    delete []P;

    return 0;
}