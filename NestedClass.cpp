#include <iostream>
using namespace std;

class outer
{
public:
    int a=10;
    static int b;
    void fun()
    {
        i.show();
        cout<<i.x<<endl;
    }

    class inner
    {
    public:
        int x=25;
        void show()
        {
            cout<<b<<endl;
        }
    };
    inner i;
};

int outer :: b=20;

int main()
{
    outer o;
    o.fun();
    return 0;
}