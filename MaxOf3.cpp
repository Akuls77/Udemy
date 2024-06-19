#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter numbers: ";
    cin>>a>>b>>c;
    cout<<"Max of 3 no is: ";
    if(a>b && a>c)
    {
        cout<<a;  
    }
    else
    {
        if(b>c)
        {
            cout<<b;
        }
        else
        {
            cout<<c;
        }
    }
    return 0;
}