#include <iostream>
using namespace std;

class rational
{
    private:
        int num;
        int denom;
    public:
        rational(int p=1, int q=1)
        {
            num = p;
            denom = q;
        }
    
        friend rational operator + (rational p, rational q);

        friend ostream & operator << (ostream &o, rational &r);
    
};

// Operator overloading for addition
rational operator + (rational p, rational q)
{
    rational t;
    t.num = (p.num*q.denom) + (q.num*p.denom);
    t.denom = p.denom * q.denom;
    return t;
}

// Operator overloading for output stream
ostream & operator << (ostream &o, rational &r)
{
    o<<r.num<<"/"<<r.denom;
    return o;
}

int main()
{
    rational r1(1,2);
    rational r2(2,3);
    rational r3;
    r3 = r1 + r2;
    cout<<"Sum of "<<r1<<" and "<<r2<<" is "<<r3<<endl;
    return 0;
}