#include <iostream>
using namespace std;
int main()
{
    int A[10], n=10;
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }

    int key;
    cout<<"Enter key: "; cin>>key;
    for(int i=0; i<n; i++)
    {
        if(A[i] == key)
        {
            cout<<"Key is at location: "<<i;
            return 0;
        }
    }
    cout<<"Element not found!!";
    return 0;
}