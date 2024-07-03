#include<iostream>
using namespace std;

int Min(int a, int b)       //function with 2 int
{
    if(a>b)
        return b;
    else
        return a;
}

int Min(int a, int b, int c)        //function with 3 int
{
    if(a>b && c>b)
        return b;
    else if(c>a)
        return a;
    else
        return c;
}

float Min(float a, float b)         //function with 2 float
{
    if(a>b)
        return b;
    else
        return a;
}

int main()
{
    cout<<Min(10,5)<<endl;
    cout<<Min(12,7,9)<<endl;
    cout<<Min(18.0f,9.0f)<<endl;
    return 0;
}