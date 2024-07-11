#include <iostream>
using namespace std;

class rectangle
{
    private:

        int len;
        int bre;
    public:

        // rectangle()     //default or non-parameterized constructor
        // {
        //     len=1;
        //     bre=1;
        // }

        rectangle(int l=1, int b=1)     //parameterized constructor
                                        //it can also act as default constructor as we have assigned it default values
        {
            setlen(l);
            setbre(b);
        }

        rectangle (rectangle &r)        //copy constructor
        {
            len = r.len;
            bre = r.bre;
        }

        void setlen(int l)
        {
            if(l>=0)
                len=l;
            else    
                len=1;
        }

        void setbre(int b)  
        {
            if(b>=0)
                bre=b;
            else    
                bre=1;
        }

        int getlen()      
        {
            return len;
        }

        int getbre()
        {
            return bre;
        }

        int area()
        {
            return len*bre;
        }

        int peri()
        {
            return 2*(len+bre);
        }
};

int main()
{
    rectangle r1;       //calls default constructor
    cout<<r1.area()<<endl;
    rectangle r2(10,5);     //calls parameterized constructor
    cout<<r2.peri()<<endl;
    rectangle r3(r2);     //calls copy constructor
    cout<<r3.peri()<<endl;

    return 0;
}