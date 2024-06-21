#include <iostream>
using namespace std;
int main()
{
    int a=10;         //data variable
    int *p;           //declaration of pointer
    p=&a;             //initialization of pointer
    
    cout<<a<<endl;    //gives data of variable a
    cout<<&a<<endl;   //gives address of variable a
    cout<<p<<endl;    //gives address of variable at which p is pointing (i.e. of a)
    cout<<&p<<endl;   //gives address of pointer p
    cout<<*p<<endl;   //gives data of variable at which p is pointing
    return 0;
}