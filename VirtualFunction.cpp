#include <iostream>
using namespace std;

class base
{
public:
    virtual void fun()      //virtual keyword is used when we want to call d class fn and we are given d class obj and b class ptr
    {
        cout<<"Fun of base"<<endl;
    }
};

class derived : public base
{
public:
    void fun()
    {
        cout<<"Fun of derived"<<endl;
    }
};

int main()
{
    derived d;
    base *ptr = &d;
    ptr->fun();
    return 0;
}