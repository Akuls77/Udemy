#include <iostream>
using namespace std;

int & func(int &a)
{
    cout<<a<<endl;      //a is nickname of x
    return a;           //it will not return value of a i.e 10 but will return the reference of x
}

int main()
{
    int x=10;
    func(x)=25;     //fn is made l-value with the help of return by reference and func(x)=x
    cout<<x;
    return 0;
}