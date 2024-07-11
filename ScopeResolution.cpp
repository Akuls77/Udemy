#include <iostream>
using namespace std;

class Rectangle
{
    private: 
        int len;
        int bre;
    public:
        Rectangle();
        Rectangle(int l, int b);
        Rectangle(Rectangle &r);
        void setlen(int l);
        void setbre(int b);
        int getlen();
        int getbre();
        bool isSquare();
        int area();
        int peri();
        ~Rectangle();
};

Rectangle :: Rectangle()
{
    len = 1;
    bre = 1;
}

Rectangle :: Rectangle (int l, int b)
{
    setlen(l);
    setbre(b);
}

Rectangle :: Rectangle (Rectangle &r)
{
    len = r.len;
    bre = r.bre;
}

void Rectangle :: setlen(int l)
{
    if(l>=0)
        len=l;
    else
        len=1;
}

void Rectangle :: setbre(int b)
{
    if(b>=0)
        bre=b;
    else
        bre=1;
}

int Rectangle :: getlen()
{
    return len;
}

int Rectangle :: getbre()
{
    return bre;
}

int Rectangle :: area()
{
    return len*bre;
}

int Rectangle ::  peri()
{
    return 2*(len+bre);
}

bool Rectangle :: isSquare()
{
    return len==bre;
}

Rectangle :: ~Rectangle()       //if destructor fn is written then destructor of obj will be called automatically at the end of main function
{
    cout<<"Rectangle destroyed.";
}

int main()
{
    Rectangle r1(10,10);
    cout<<"Area: "<<r1.area()<<endl;
    if(r1.isSquare())
        cout<<"YES"<<endl;
    return 0;
}