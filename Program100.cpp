#include<iostream>
using namespace std;

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int i = 0;

    if(iStart < iEnd)
    {
        cout<<"starting range is less than ending range"<<endl;
        return;
    }
    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] > iStart)&&(Arr[i] < iEnd))
        {
            printf("%d\t",Arr[i]);
        }
    }
}
int main()
{
    int i = 0;
    int *P = NULL;
    int iSize = 0;
    int iNo1 = 0; 
    int iNo2 = 0;

    cout<<"How many numbers you want to add in array : "<<endl;
    cin>>iSize;

    P = new int[iSize];

    if(P == NULL)
    {
        cout<<"Unable to allocate the memory "<<endl;
        return -1;
    }

    cout<<"Enter the numbers"<<endl;

    for(i = 0; i < iSize; i++)
    {
        cin>>P[i];
    }

    cout<<"Enter start range : "<<endl;
    cin>>iNo1;

    cout<<"Enter end range : "<<endl;
    cin>>iNo2;

    Range(P, iSize, iNo1, iNo2);

    return 0;
}