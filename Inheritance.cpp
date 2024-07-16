#include <iostream>
using namespace std;

class Base
{
    public:
        int a;
        void display()
        {
            cout<<"Display of base!! "<<a<<endl;
        }
};

class Derived : public Base     //derived class gets all the data memebers and member fn from the base class
{
    public:
        void show()
        {
            cout<<"Show of derived!!"<<endl;
        }
};

int main()
{
    Derived d;
    d.a=100;
    d.display();
    d.show();
    return 0;
}