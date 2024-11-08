#include<iostream>
using namespace std;

class Display
{
    public:
        int iRows;
        int iCols;

        Display(int iRo, int iCo)
        {
            iRows = iRo;
            iCols = iCo;
        }

        void Pattern()
        {
            int i = 0;
            int j = 0;

            for(i = iRows; i > 0; i--)
            {
                for(j = iCols; j > 0; j--)
                {
                    cout<<i<<"\t";
                }
                cout<<endl;
            }
        }
};
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    cout<<"Enter the number of rows  :"<<endl;
    cin>>iNo1;


    cout<<"Enter the number of cols  :"<<endl;
    cin>>iNo2;

    Display dobj(iNo1, iNo2);
    dobj.Pattern();

    return 0;
}