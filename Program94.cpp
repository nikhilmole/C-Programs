#include<iostream>
using namespace std;

bool Search(int Arr[], int iLength)
{
    int i = 0;
    bool bFlag = false;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == 11)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}
int main()
{
    int iSize = 0;
    int *P = NULL;
    int i = 0;
    bool bRet = false;

    cout<<"How many numbers you want add : "<<endl;
    cin>>iSize;

    P = new int[iSize];

    cout<<"Enter the numbers : "<<endl;

    for(i = 0; i < iSize; i++)
    {
        cin>>P[i];
    }

    bRet = Search(P, iSize);
    if(bRet == true)
    {
        cout<<"11 is present"<<endl;
    }
    else
    {
        cout<<"11 is not present"<<endl;
    }

    delete [] P;
    return 0;
}
