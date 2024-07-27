#include <iostream>
#include <memory>
using namespace std;

class rect
{
private:
    int len;
    int bre;
public:
    rect(int l, int b)
    {
        len = l;
        bre = b;
    }
    int area()
    {
        return len*bre;
    }
};

int main()
{
    unique_ptr <rect> ptr(new rect(10,5));
    cout<<ptr->area()<<endl;

    unique_ptr <rect> ptr2;
    ptr2 = move(ptr);       //ptr2 is now pointing on to obj of ptr
    cout<<"Ptr 2: "<<ptr2->area()<<endl<<endl;

    shared_ptr <rect> ptr3(new rect(9,7));
    cout<<ptr3->area()<<endl;

    shared_ptr <rect> ptr4;
    ptr4 = ptr3;       //both the pointers are pointing on to same obj
    cout<<"Ptr 4: "<<ptr4->area()<<endl;
    cout<<"Ptr 3: "<<ptr3->area()<<endl;
    cout<<ptr3.use_count()<<endl;        //will give no of obj pointing on this one
    return 0;
}