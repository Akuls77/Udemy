#include <iostream>
using namespace std;

template <class T>
T maxim (T a, T b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    cout<<maxim(4,6)<<endl;
    cout<<maxim(4.2,5.3)<<endl;
    cout<<maxim(3.5f,7.6f);
    return 0;
}