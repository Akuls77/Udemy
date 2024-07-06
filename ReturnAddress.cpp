#include <iostream>
using namespace std;

int *func()
{
    int *p = new int[5];
    for(int i=0; i<5; i++)
    {
        p[i]=i+1;
    }
    cout<<p<<endl;
    return p;
}

int main()
{
    int *ptr = func();
    cout<<ptr<<endl;        //ptr is pointing on to the same heap memory as that of p
    for (int i=0; i<5; i++)
    {
        cout<<ptr[i]<<" ";
    }
    delete []ptr;
    
}