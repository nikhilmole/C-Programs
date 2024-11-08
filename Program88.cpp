#include<iostream>
using namespace std;

void Divisible(int Arr[], int iLength)
{
    int i = 0;

    cout<<"Divisible by 5 number is : "<<endl;
    for(i = 0; i < iLength; i++)
    {   
        if(Arr[i] % 5 == 0)
        {
            cout<<Arr[i]<<endl;
        }
    }
}
int main()
{
    int iSize = 0;
    int *Arr = NULL;
    int i = 0;

    cout<<"How many number you want to add in Array : "<<endl;
    cin>>iSize;

    Arr = new int[iSize];

    cout<<"Enter the numbers : "<<endl;

    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }

    Divisible(Arr,iSize);

    return 0;
}
