#include <iostream>
using namespace std;

class rect
{
    private:
        int len;
        int bre;
    public:
        rect(int len , int bre)
        {
            this->len =len;     //represents curr obj of class
            this->bre =bre;
        }
        int area()
        {
            return len*bre;
        }
};


int main()
{
    rect r1(10,5);
    cout<<"Area is: "<<r1.area()<<endl;
    return 0;
}