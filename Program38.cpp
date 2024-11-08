#include<iostream>
using namespace std;

void Display(int iNum1, int iNum2)
{   
    int i = 0;

    for(i = iNum1; i <= iNum2; i++)
    {
        cout<<i<<endl;
    }

}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    cout<<"Print First number : ";
    cin>>iNo1;

    cout<<"Print Second number : ";
    cin>>iNo2;

    Display(iNo1, iNo2);

    return 0;
}