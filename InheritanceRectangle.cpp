#include <iostream>
using namespace std;

class rectangle
{
private:
    int len;
    int bre;
public:
    rectangle(int l=1, int b=1){len =l; bre =b;}
    rectangle(rectangle &r) {len = r.len;}
    int getlen() {return len;}
    int getbre() {return bre;}
    void setlen(int l) {len = l;}
    void setbre(int b) {bre = b;}
    int area() {return len*bre;}
    int peri() {return 2*(len+bre);}
    bool isSquare() {return len==bre;}
    ~rectangle() {cout<<"Rectangle destroyed!!";}
};

class cuboid : public rectangle
{
private:
    int ht;
public:
    cuboid(int h=1) {ht =h;}
    void setht(int h) {ht = h;}
    int getht() {return ht;}
    int vol() {return (getlen()*getbre()*ht);}      //since len and bre are private members of rect hence cannot be accessed by cuboid class
};


int main()
{
    cuboid c(5);
    c.setlen(10);
    c.setbre(4);
    cout<<"Volume is: "<<c.vol()<<endl;
    return 0;
}