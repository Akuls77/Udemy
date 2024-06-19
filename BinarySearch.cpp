#include <iostream>
using namespace std;
int main()
{
    int A[100], n;
    cout<<"Enter no of elements in array: "; cin>>n;
    cout<<"Enter elements: "; //enter elements in sorted order for binary search
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }

    int key; 
    cout<<"Enter key: "; cin>>key;
    int low=0, high=n-1, mid;

    while(low<=high)
    {
        mid= (low+high)/2;
        if(key==A[mid])
        {
            cout<<"Key found at location: "<<mid;
            return 0;
        }
        else if(key>A[mid])
        {
            low=mid+1;
        }
        else if(key<A[mid])
        {
            high=mid-1;
        }
    }
    cout<<"Key not found!!";
    return 0;
}