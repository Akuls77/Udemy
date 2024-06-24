#include <iostream>
using namespace std;
int main()
{
    int A[5]={2,4,6,8,10};
    int *p= A;         //will point to address of 2
    cout<<*p<<endl;

    int *q= &A[3];     //will point to address of 8
    int d=q-p;         //gives distance between the 2 pointers
    cout<<d<<endl;

    p++;               //will move the pointer to next location or to next element
    cout<<*p<<endl;
    p--;               //will move the pointer to previous location or to previous element
    cout<<*p<<endl;
    p=p+2;             //will move the pointer forward by 2 elements
    cout<<*p<<endl;
    p=p-2;             //will move the pointer backward by 2 elements
    cout<<*p<<endl;

    return 0;
}