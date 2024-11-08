#include<iostream>
using namespace std;

int LastOcc(int Arr[], int iLength, int iNum)
{
    int i = 0 ;

    for(i = iLength-1; i > 0; i--)
    {
        if(Arr[i] == iNum)
        {
            return i+1;
        }
    }
    return -1;
}
int main()
{
    int i = 0;
    int iSize = 0;
    int *P = NULL;
    int iRet = 0;
    int iNo = 0;

    printf("How any numbers you want to add in array : ");
    scanf("%d",&iSize);

    P = (int*)malloc(iSize * sizeof(int));

    if(P == NULL)
    {
        printf("Unable to allocate the memory ");
        return -1;
    }

    printf("Enter the numbers : ");

    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&P[i]);
    }

    printf("Enter the number to find the last occurunce : ");
    scanf("%d",&iNo);

    iRet = LastOcc(P, iSize, iNo);

    if(iRet == -1)
    {
        printf("The number is not present : ");
    }
    else
    {
        printf("last occurance is : %d",iRet);
    }

    free(P);

    return 0;
}