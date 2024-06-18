#include <iostream>
using namespace std;
int main()
{
    int n, r, sum=0, m;
    cout<<"Enter n: "; cin>>n;  //eg 407,370,371
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+(r*r*r);
    }
    if(m==sum)
    {
        cout<<"Armstrong no";
    }
    else
        cout<<"NOT";
    return 0;
}