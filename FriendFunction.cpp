#include <iostream>
using namespace std;

class test
{
private:
    int a;
protected:
    int b;
public:
    int c;
    friend void fun();
};

void fun()
{
    test t;     //we can only access the members of the class upon an obj
    t.a=10;
    t.b=15;
    t.c=5;
    cout << "a: " << t.a << endl;
    cout << "b: " << t.b << endl;
    cout << "c: " << t.c << endl;
}

int main()
{
    fun();
    return 0;
}