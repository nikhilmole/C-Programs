#include<iostream>
using namespace std;

class Nnumbers
{
    public:
        int iLength;
        int *P;

        Nnumbers(int iSize)
        {
            iLength = iSize;
            P = new int[iLength];   
        }
        ~Nnumbers()
        {
            delete []P;
        }
        void Accept()
        {
            int i = 0;

            for(i = 0; i < iLength; i++)
            {
                cin>>P[i];
            }
        }
        int EvenCount()
        {
            int iCnt = 0;
            int i = 0;

            cout<<"Enter the numbers : ";
            
            for(i = 0; i < iLength; i++)
            {
                if(P[i] % 2 == 0)
                {
                    iCnt++;
                }
            }
            return iCnt;
        }

};

int main()
{
    int iSize = 0;
    int iRet = 0;

    cout<<"How many number you want to add in array : "<<endl;
    cin>>iSize;

    Nnumbers obj(iSize);

    obj.Accept();
    iRet = obj.EvenCount();

    cout<<"Even number count is : "<<iRet;

    return 0;
}