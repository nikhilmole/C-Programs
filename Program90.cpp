#include<iostream>
using namespace std;

void Divisible(int Arr[], int iLength)
{
    int i = 0;

    cout<<"the number divisible by 3 and 2 are : "<<endl;
    
    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] % 3 == 0) && (Arr[i] % 2 == 0))
        {
            cout<<Arr[i]<<endl;
        }
    }
}
int main()
{
    int iSize =  0;
    int *P = NULL;
    int i = 0;

    cout<<"How many number you want to add in array : ";
    cin>>iSize;

    P = new int[iSize];

    cout<<"Enter the numbers : ";
    for(i = 0; i < iSize; i++)
    {
        cin>>P[i];
    }

    Divisible(P, iSize);
    delete []P;
    return 0;
}