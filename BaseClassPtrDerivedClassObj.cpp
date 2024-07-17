#include <iostream>
using namespace std;

class Base
{
public:
    void fun1() { cout << "Fun1 of base!!" << endl; }
};

class Derived : public Base
{
public:
    void fun2() { cout << "Fun2 of derived!!" << endl; }
};

int main()
{
    Derived d;
    Base *ptr = &d;
    ptr->fun1();
    //ptr->fun2();   when we use pointer of base class then it will look for function in base class
    return 0;
}
