#include <iostream>
using namespace std;

class test
{
private:
    int a;
public:
    static int count;
    test()
    {
        a=10;
        count++;
    }
    static int getcount()   //only static data members can be accessed by this fn
    {
        return count;
    }
};

int test::count=0;

int main()
{
    test t1;
    cout<<t1.getcount()<<endl;
    cout<<test::getcount()<<endl;
    return 0;
}