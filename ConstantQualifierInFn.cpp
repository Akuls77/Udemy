#include <iostream>
using namespace std;

class demo
{
private:
    int x=10;
    int y=20;
public:
    void display() const    //it cannot modify data members of a class, it can only read them
    {
        //x++;
        cout<<x<<" "<<y<<endl;
    }
};

void fun(const int &a, int &b)      //const ref means it can only use that ref but cannot modify it
{
    cout<<a<<" "<<b<<endl;
    //a++;
}

int main()
{
    demo d;
    d.display();

    int p=1;
    int q=2;
    fun(p,q);
    cout<<"Main "<<p<<" "<<q<<endl;
    return 0;
}