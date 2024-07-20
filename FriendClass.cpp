#include <iostream>
using namespace std;

class your;     //class your must have declaration first then only it could be friend and it could have its ellaboration later

class my
{
private:
    int a=10;
protected:
    int b=5;
public:
    int c=15;
    friend your;
};

class your
{
public:
    my m;
    void fun()
    {
        cout<<m.a<<endl;
        cout<<m.b<<endl;
        cout<<m.c<<endl;
    }
};

int main()
{
    your y;
    y.fun();
    return 0;
}