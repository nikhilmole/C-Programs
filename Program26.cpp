#include<iostream>
using namespace std;

void Display(int iNum)
{
    if(iNum < 0)
    {
        iNum = -iNum;
    }
    switch(iNum)
    {
        case 0:
            cout<<"Zero"<<endl;
            break;

        case 1:
            cout<<"One"<<endl;
            break;
        
        case 2:
            cout<<"Two"<<endl;
            break;

        case 3:
            cout<<"Three"<<endl;
            break;

        case 4:
            cout<<"Four"<<endl;
            break;

        case 5:
            cout<<"Five"<<endl;
            break;

        case 6:
            cout<<"Six"<<endl;
            break;

        case 7:
            cout<<"Seven"<<endl;
            break;

        case 8:
            cout<<"Eight"<<endl;
            break;

        case 9:
            cout<<"Nine"<<endl;
            break;

        default:
            cout<<"Invalid option";
    }

}
int main()
{
    int iNo = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iNo;

    Display(iNo);

    return 0;
}