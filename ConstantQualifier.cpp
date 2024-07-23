#include <iostream>
using namespace std;
int main()
{
    int const x=10;     //x is a constant int
    cout<<x<<endl;

    const int y=3;      //y is an identifier of type int constant
    cout<<y<<endl;

    int z=12;
    const int *ptr = &z;        //pointer of type int constant 
    cout<<*ptr<<endl;

    int p=4;
    int const *ptr1 = &p;        //pointer to a constant int 
    int q=5;
    ptr1 = &q;
    cout<<*ptr1<<endl;

    int l=28;
    int * const ptr2 =&l;       //we can change the value of variable but cannot move the pointer to another variable  
    ++*ptr2;
    //int m=34;
    //ptr2 = &m;
    cout<<*ptr2<<endl;

    int t=45;
    const int * const ptr3 =&t;       //constant ptr to a int constant i.e we cannot modify the data as well as move the ptr to another var
    //++*ptr3;
    //int u=34;
    //ptr2 = &m;
    cout<<*ptr3<<endl;
    
}