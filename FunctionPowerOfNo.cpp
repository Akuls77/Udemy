#include<iostream>
using namespace std;

int pow(int m, int n)
{
    int p= 1;
    for(int i=1; i<=n; i++)
    {
        p=p*m;
    }
    return p;
}

int main()
{
    cout<<pow(2,5);
}