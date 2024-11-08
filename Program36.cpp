#include<iostream>
using namespace std;

float FhToCs(float Temp)
{
    float Celcius = 0.0f;

    Celcius = (Temp - 32) * (5.0f/9.0f);

    return Celcius;
}
int main()
{
    float fNo = 0.0f;
    float iRet = 0.0f;

    cout<<"Enter temprature: ";
    cin>>fNo;

    iRet = FhToCs(fNo);
    cout<<iRet;
    return 0;
}