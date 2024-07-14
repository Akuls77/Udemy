#include <iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int img;
    public:
        Complex(int r=0, int i=0)
        {
            real = r;
            img = i;
        }

        int getreal()
        {
            return real;
        }

        int getimg()
        {
            return img;
        }

        Complex operator + (Complex x)
        {
            Complex temp;
            temp.real = real + x.real;
            temp.img = img + x.img;
            return temp;
        }
};

int main()
{
    Complex c1(3,5);
    Complex c2(2,8);
    Complex c3;
    c3 = c1 + c2;
    cout<<c3.getreal()<<" + "<<c3.getimg()<<" i"<<endl;
    return 0;
}