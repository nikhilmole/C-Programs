#include<iostream>
using namespace std;

void EvenDivisible(int Arr[], int iLenght)
{
    int i = 0;

    cout<<"The number is even and divisible by 5 :";

    for(i = 0; i < iLenght; i++)
    {
        if((Arr[i] % 2 == 0)&&(Arr[i] % 5 == 0))
        {
            cout<<Arr[i]<<endl;
        }
    }
}
int main()
{
    int iSize = 0;
    int i = 0;
    int *P = NULL;

    cout<<"How many number you want to add in array : "<<endl;
    cin>>iSize;

    P = new int[iSize];

    cout<<"Enter the numbers : "<<endl;
    for(i = 0; i < iSize; i++)
    {
        cin>>P[i];
    }

    EvenDivisible(P, iSize);
    
    delete []P;

    return 0;
}