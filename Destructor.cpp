#include <iostream>
using namespace std;

class test
{
    int *p;
public:
    test()
    {
        p=new int[10];
        cout<<"test created"<<endl;
    }
    ~test()
    {
        delete []p;
        cout<<"test destroyed"<<endl;
    }
};

void fun()
{
    test *ptr = new test();
    delete ptr;
}

int main()
{
    fun();
    return 0;
}