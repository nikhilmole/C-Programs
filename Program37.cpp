#include<iostream>
using namespace std;

double SqMeter(float fNum)
{
    double Ans = 0.0f;

    Ans = 0.0929 * fNum;

    return Ans;
}
int main()
{
    float fNo = 0.0f;
    double dRet = 0.0f;

    cout<<"Enter area of Sq : "<<endl;
    cin>>fNo;

    dRet = SqMeter(fNo);

    cout<<dRet;

    return 0;
}