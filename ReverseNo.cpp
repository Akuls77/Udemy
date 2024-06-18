#include <iostream>
using namespace std;
int main()
{
    int n, s, rev=0;
    cout<<"Enter n: "; cin>>n;
    while(n>0)
    {
        s=n%10;
        n=n/10;
        rev=rev*10+s;
    }
    cout<<rev<<endl;
    return 0;
}