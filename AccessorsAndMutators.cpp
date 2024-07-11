#include <iostream>
using namespace std;

class rectangle
{
    private:
        int len;
        int bre;
    public:
        void setlen(int l)  //return type is void since they dont return any value
        {
            if(l>=0)
                len=l;
            else    
                len=0;
        }

        void setbre(int b)  //set fn is used to write or modify the value
        {
            if(b>=0)
                bre=b;
            else    
                bre=0;
        }

        int getlen()        //get fn is used to read the value
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
    rectangle r;
    r.setlen(10);
    r.setbre(-5);
    cout<<"Breadth is: "<<r.getbre()<<endl;
    cout<<"Area is: "<<r.area();
    return 0;
}