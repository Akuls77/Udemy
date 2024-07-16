#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout<<"Default of base"<<endl;
    }
    base(int x)
    {
        cout<<"Param of base "<<x<<endl;
    }
};

class derived : public base
{
public:
    derived()
    {
        cout<<"Default of derived"<<endl;
    }
    derived(int a)
    {
        cout<<"Param of derived "<<a<<endl;
    }

    derived(int y, int a) : base(y)     //we get param constructor of base class using derived class obj
    {
        cout<<"Param of derived "<<a<<endl;
    }
};

int main()
{
    derived d;
    cout<<endl;
    derived d1(10);
    cout<<endl;
    derived d2(20,10);
    return 0;
}