#include <iostream>
using namespace std;
int main()
{
    int i, n,sum=0;
    cout<<"Enter n: "; cin>>n;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
            cout<<i<<" "; 
        } 
    }
    cout<<endl;
    cout<<sum<<endl;
    if(sum==(2*n))
    {
        cout<<"It is a perfect number";
    }
    else
        cout<<"NOT";
    return 0;
}