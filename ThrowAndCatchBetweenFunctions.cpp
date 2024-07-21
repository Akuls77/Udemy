#include <iostream>
using namespace std;

int division (int x, int y)
{
    if(y==0)
        throw string("Div by 0");
    return x/y;
}

int main()
{
    int a=10, b=0, c;
    try
    {
        c= division (a,b);
        cout<<c<<endl;
    }
    catch(string e)
    {
        cout<<"Division by zero "<<e<<endl;
    }
    cout<<"Bye"<<endl;
    return 0;
}