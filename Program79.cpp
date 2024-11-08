#include<iostream>
using namespace std;

void Pattern(int iRows, int iCols)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRows; i++)
    {
        for(j = 1; j <= iCols; j++)
        {
            if(i == j)
            {
                cout<<"$\t";
            }
            if(j < i)
            {
                cout<<"*\t";
            }
            else
            {
                cout<<"#\t";
            }
        }
        cout<<"\n";
    }
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    cout<<"Enter the number of rows : ";
    scanf("%d",&iNo1);

    cout<<"Enter the number of column : ";
    cin>>iNo2;

    Pattern(iNo1, iNo2);

    return 0;   
}