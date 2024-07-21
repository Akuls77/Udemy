#include <iostream>
using namespace std;

class MyException : public exception     //inheriting of bulit-in class
{

};

int division (int x, int y) throw (MyException)
{
    if(y==0)
        throw MyException();       //we are throwing obj of our own class
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
    catch(MyException e)
    {
        cout<<"Division by zero "<<endl;
    }
    cout<<"Bye"<<endl;
    return 0;
}