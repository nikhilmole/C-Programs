#include<iostream>
using namespace std;

void Pattern(int iRows ,int iCols)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRows; i++)
    {
        for(j = 1; j <= iCols; j++)
        {
            if((i == 1)||(j == 1)||(i == iRows)||(j == iCols)||(i == j))
            {
                cout<<j<<"\t";
            }
            else
            {
                cout<<"\t";
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

    cout<<"Enter the number of column : ";
    cin>>iNo2;

    Pattern(iNo1, iNo2);

    return 0;
}