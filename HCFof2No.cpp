#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout<<"Enter n: "; cin>>n;
    cout<<"Enter m: "; cin>>m;
    while(n!=m)
    {
        if(n>m)
        {
            n=n-m;
        }
        else if(m>n)
        {
            m=m-n;
        }
    }
    cout<<"HCF is: "<<m;
    return 0;
}