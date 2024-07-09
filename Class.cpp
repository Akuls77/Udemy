#include <iostream>
using namespace std;

class rectangle
{
public:
    int len;
    int bre;
    
    int area()
    {
        return len*bre;
    }
    int perimeter()
    {
        return 2*(len+bre);
    }
};

int main()
{
    rectangle r1,r2;        //r1 and r2 are objects of class rectangle
    r1.len=10;
    r1.bre=20;
    cout<<"Area is: "<<r1.area()<<endl;
    r2.len=15;
    r2.bre=10;
    cout<<"Perimeter is: "<<r2.perimeter();
    return 0;
}