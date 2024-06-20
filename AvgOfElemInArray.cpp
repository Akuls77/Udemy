#include <iostream>
using namespace std;
int main()
{
    float A[100], sum=0.0, avg, n;
    cout<<"Enter no of elements in array: "; cin>>n;
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
        sum+=A[i];
    }
    avg=sum/n;
    cout<<endl<<"Sum is: "<<sum<<endl;
    cout<<"Avg is: "<<avg<<endl;
    return 0;
}