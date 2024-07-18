#include <iostream>
using namespace std;

class parent
{
public:
    void display()
    {
        cout<<"Display of parent"<<endl;
    }
};

class child : public parent 
{
public:
    void display()      //display fn is overrided by redefining it in child class
    {
        cout<<"Display if child"<<endl;
    }
};

int main()
{
    parent p;
    p.display();
    child c;
    c.display();
    c.parent::display();        //to print display fn of parent class with help of child class obj
    return 0;
}