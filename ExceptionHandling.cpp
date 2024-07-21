#include <iostream>
using namespace std;

int main()
{
    int a=10, b=0, c;
    try
    {
        if(b==0)
            throw 101;
        c=a/b;
        cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Division by zero "<<e<<endl;
    }
    cout<<"Bye"<<endl;      //always executed whether there is an exception or not
    return 0;
}