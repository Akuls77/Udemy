#include <iostream>
using namespace std;

void swapn(int a, int b)
{
    cout<<a<<" "<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;    
}

int main()
{
    int x=10, y=20;
    swapn(x,y);
    cout<<"Value after swapping: "<<x<<" "<<y;
    return 0;
}