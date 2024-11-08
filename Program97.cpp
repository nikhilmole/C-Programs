#include<iostream>
using namespace std;

bool Search(int Arr[], int iLenght, int iNum)
{
    int i = 0;
    bool bFlag = false;

    for(i = 0; i < iLenght; i++)
    {
        if(Arr[i] == iNum)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}
int main()
{
    int i = 0;
    int *P = NULL;
    int iNo = 0;
    int iSize = 0;
    bool bRet = false;

    cout<<"How many numbers you want to add in array : "<<endl;
    cin>>iSize;

    P = new int[iSize];

    if(P == NULL)
    {
        cout<<"Unable to allocate the memory : "<<endl;
        return -1;
    }

    cout<<"Enter the numbers : "<<endl;

    for(i = 0; i < iSize; i++)
    {
        cin>>P[i];
    }

    cout<<"Enter number you want to search in array :"<<endl;
    cin>>iNo;

    bRet = Search(P, iSize, iNo);
    
    if(bRet == true)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    return 0;
}