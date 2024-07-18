#include <iostream>
using namespace std;

class car
{
public:
    virtual void start()=0;
    virtual void stop()=0;
};

class innova :public car
{
public:
    void start()
    {
        cout<<"Innova started"<<endl;
    }
    void stop()
    {
        cout<<"Innova stopped"<<endl;
    }
};

class swift : public car
{
public:
    void start()
    {
        cout<<"Swift started"<<endl;
    }
    void stop()
    {
        cout<<"Swift stopped"<<endl;
    }
};

int main()
{
    innova i;
    car *c = &i;    //stack memory allocation
    c->start();

    c = new swift();    //heap memory allocation
    c->start();
    return 0;
}  
