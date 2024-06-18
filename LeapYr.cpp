#include <iostream>
using namespace std;
int main()
{
    int yr;
    cout<<"Enter year: ";
    cin>>yr;

    if(yr%4==0)
    {
        if(yr%100==0)
        {
            if(yr%400==0)
            {
                cout<<yr<<" is a leap year";
            }
            else
            {
                cout<<yr<<" NOT";
            }    
        }
        else
        {
            cout<<yr<<" is a leap year";
        }
        
    }
    else
    {
        cout<<yr<<" NOT";
    }
}