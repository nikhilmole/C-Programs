#include<iostream>
using namespace std;

void Pattern(int iRows, int iCols)
{
    int i = 0;
    int j = 0;
    char ch1 = '\0';
    char ch2 = '\0';

    for(i = 1,ch1 = 'A'; i <= iRows; i++, ch1++)
    {
        for(j = 1,ch2 = 'A'; j <= iCols; j++, ch2++)
        {
            cout<<ch1<<"  ";
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

    cout<<"Enter the number of Cols : ";
    cin>>iNo2;

    Pattern(iNo1,iNo2);

    return 0;
}