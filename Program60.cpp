#include<iostream>
using namespace std;

void Pattern(int iRows, int iCols)
{
    int i = 0;
    int j = 0;

    for(i = iRows; i > 0; i--)
    {
        for(j = iCols; j > 0; j--)
        {
            cout<<j<<"  ";
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

    cout<<"Enter the number of columns : ";
    cin>>iNo2;

    Pattern(iNo1,iNo2);

    return 0;
}