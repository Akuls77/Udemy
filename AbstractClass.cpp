#include <iostream>
using namespace std;

class base      //abstract class
{
public:
    void fun1()
    {
        cout<<"Base fun1"<<endl;
    }
    virtual void fun2() = 0;    //pure virtual fn
};

class derived : public base
{
public:
    void fun2()
    {
        cout<<"Derived fun2"<<endl;
    }
};

int main()
{
    derived d;
    d.fun1();
    d.fun2();
    return 0;
}