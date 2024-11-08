#include<iostream>
using namespace std;

int FirstOcc(int Arr[],int iSize, int iNum)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNum)
        {
            return i + 1;
        }
    }
    return -1;
}
int main()
{
    int i = 0;
    int iSize = 0;
    int iRet = 0;
    int iNo = 0;
    int *P = NULL;

    cout<<"How many numbers you want to add in array : "<<endl;
    cin>>iSize;

    P = (int*)malloc(iSize * sizeof(int));

    if(P == NULL)
    {
        cout<<"Unable to allocate the memory"<<endl;
        return -1;
    }

    cout<<"Enter the numbers : "<<endl;
    for(i = 0; i < iSize; i++)
    {
        cin>>P[i];
    }    

    cout<<"Enter number you want to search index : "<<endl;
    cin>>iNo;

    iRet = FirstOcc(P, iSize, iNo);

    if(iRet == -1)
    {
        cout<<"There is no number"<<endl;
    }
    else
    {
        cout<<"First Occurance of the number is : "<<iRet<<endl;
    }

    return 0;
}
