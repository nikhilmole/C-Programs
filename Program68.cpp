#include<iostream>
using namespace std;

int Pattern(int irows, int icols)
{
    int i = 0;
    int j = 0;

    int iCnt = 1;

    for(i = 1; i <= irows; i++)
    {
        for(j = 1; j <= icols; j++)
        {
            cout<<iCnt<<"\t";
            iCnt = iCnt + 1;
            if(iCnt == 10)
            {
                iCnt = 1;
            }
        }
        cout<<endl;
    }
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    cout<<"Enter the number of rows : ";
    cin>>iNo1;

    cout<<"Enter the number of cols : ";
    cin>>iNo2;
    Pattern(iNo1, iNo2);

    return 0;
}