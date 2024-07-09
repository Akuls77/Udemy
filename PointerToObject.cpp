#include <iostream>
using namespace std;

class rect
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
    rect *ptr;
    ptr = new rect;        //dynamic object is created in heap
    ptr->len=10;
    ptr->bre=15;
    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter();
    return 0;
}