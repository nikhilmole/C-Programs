#include<iostream>
using namespace std;

void Pattern(int iRows, int iCols)
{
    int i = 0;
    int j = 0;

    if(iRows != iCols)
    {
        cout<<"The rows and columns are not same in numbers : "<<endl;
        return;
    }
    for(i = 1; i<= iRows; i++)
    {
        for(j = 1; j <= iCols; j++)
        {
            if(i >= j)
            {
                cout<<"*\t";
            }
            else
            {
                cout<<"";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    cout<<"ENter the number of rows : ";
    cin>>iNo1;

    cout<<"ENter the number of iCols : ";
    cin>>iNo2;

    Pattern(iNo1, iNo2);

    return 0;
}