#include<iostream>
using namespace std;

class Convert
{
    public:
        int iValue;
        int Rupees;

        Convert(int iValue1,int iValue2)
        {
            iValue = iValue1;
            Rupees = iValue2; 
        }
        int DollerToRs()
        {
            int Ans = iValue * Rupees;
            return Ans;
        }
};

int main()
{
    int iNo = 0;
    int Rs = 70;
    int iRet = 0;

    cout<<"Enter doller to convert INR Rs"<<endl;
    cin>>iNo;

    Convert cobj(iNo,Rs);

    iRet = cobj.DollerToRs();
    cout<<"Doller into rs : "<<iRet;
    return 0;
}