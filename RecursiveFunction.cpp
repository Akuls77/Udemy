#include <iostream>
using namespace std;

void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<endl;      //it will go back to the previous call and start printing
    }
}

int main()
{
    int x=5;
    fun(x);
    return 0;
}