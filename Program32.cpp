#include<iostream>
using namespace std;

class Factorial
{
    public:
        int iValue;

        Factorial(int iNum)
        {
            iValue = iNum;
        }

        int OddFacto()
        {
            int i = 0;
            int iFacto = 1;
            if(iValue < 0)
            {
                iValue = -iValue;
            }
            for(i = 1; i <= iValue; i++)
            {
                if(i % 2 != 0)
                {
                    iFacto = iFacto * i;
                }
            }
            return iFacto;
        }
};
int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iNo;

    Factorial obj(iNo);

    iRet = obj.OddFacto();
    cout<<iRet;

    return 0;
}