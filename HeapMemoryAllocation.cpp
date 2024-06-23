#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int *p;               //pointer p is created
    p= new int[size];     //array is created inside heap memory to which p is pointing
    cout<<p[size]<<endl;
    delete []p;           //we should delete p of intial size to avoid memory leakage

    cout<<"Enter new size: ";
    cin>>size;
    p= new int[size];     //array inside heap with modified size
    cout<<p[size]<<endl;
    return 0;
}