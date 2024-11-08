#include<iostream>
using namespace std;

int Kmtometer(int iNo, int Meter)
{
    int meter = 1;

    meter = iNo * Meter;

    return meter; 
}
int main()
{
    int iValue = 0;
    int Meter = 1000;   
    int iRet = 0;

    cout<<"Enter Kilometer : ";
    cin>>iValue;

    iRet = Kmtometer(iValue,Meter);
    cout<<iRet;

    return 0;
}