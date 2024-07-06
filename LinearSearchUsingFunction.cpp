#include <iostream>
using namespace std;

int lsearch(int A[], int n, int  key)
{
    for(int i=0; i<n; i++)
    {
        if(key==A[i])
            return i;
    }
    return -1;
}

int main()
{
    int A[]= {12,45,84,68,23,72,6,56};
    int key;
    cout<<"Enter key to be searched: ";
    cin>>key;
    int pos = lsearch(A,8,key);
    cout<<"Position is: "<<pos<<endl;
    return 0;
}