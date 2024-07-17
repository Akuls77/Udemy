#include <iostream>
using namespace std;

class rect
{
private:
    int len;        //we cannot directly access these members if we want to write then we need to call setlen and setbre
    int bre;
public:
    void setlen(int l) { len =l; }
    void setbre(int b) { bre =b; }
    int getlen() { return len; }
    int getbre() { return bre; }
    int area() { return len*bre; }
    int peri() { return 2*(len+bre); }
};

int main()
{
    rect r1;
    // r1.len =10;  since len and bre are pvt members of rect class
    // r1.bre =5;
    r1.setlen(5);
    r1.setbre(10);
    cout<<"Area is: "<<r1.area()<<endl;
    cout<<"Length is: "<<r1.getlen()<<endl;
    cout<<"Breadth is: "<<r1.getbre()<<endl;
    return 0;
}