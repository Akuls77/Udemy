#include <iostream>
using namespace std;

class shape
{
public:
    virtual float area()=0;
    virtual float peri()=0;
};

class rectangle : public shape
{
private:
    float len;
    float bre;
public:
    rectangle (float l=1, float b=1)
    {
        len = l;
        bre = b;
    }
    float area()
    {
        return (len*bre);
    }
    float peri()
    {
        return 2*(len+bre);
    }
};

class circle : public shape
{
private:
    float rad;
public:
    circle(float r=1)
    {
        rad = r;
    }
    float area()
    {
        return (3.142*rad*rad);
    }
    float peri()
    {
        return (2*3.142*rad);
    }
};

int main()
{
    shape *s = new rectangle(10,5);
    cout<<"Area if rectangle is: "<<s->area()<<endl;
    cout<<"Perimter of rectangle is: "<<s->peri()<<endl;

    s=new circle(10);
    cout<<"Area if circle is: "<<s->area()<<endl;
    cout<<"Perimter of circle is: "<<s->peri()<<endl;
    return 0;
}