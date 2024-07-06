#include <iostream>
using namespace std;

void fun()
{
    static int v=0;     //static var are present through out execn of prog but accessible only in resp fn
    int a =10;
    v++;
    cout<<a<<" "<<v<<endl;
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}