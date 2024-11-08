#include<iostream>
using namespace std;

void RangeRevDis(int Start, int End)
{
    int i = 0;
    if(Start > End)
    {
        cout<<"Invalid Option";
    }
    for(i = End; i >= Start; i--)
    {
        cout<<i<<" " ;
    }
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    cout<<"Enter Starting point : ";
    cin>>iNo1;

    cout<<"Enter Starting point : ";
    cin>>iNo2;

    RangeRevDis(iNo1, iNo2);

    return 0;
}