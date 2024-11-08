#include<iostream>
using namespace std;

void Pattern(int iRows, int iCols)
{
    int i = 0;
    int j = 0;
    char ch1 = '\0';
    char ch2 = '\0';

    for(i = 1, ch1 = 'a'; i <= iRows; i++,ch1++)
    {
        for(j = 1 ,ch2 = 'a'; j <= iCols; j++, ch2++)
        {
            if(i % 2 == 0)
            {
                cout<<j<<"\t";
            }
            else
            {
                cout<<ch2<<"\t";
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

    Pattern(iNo1,iNo2);

    return 0;
}