#include <iostream>
using namespace std;
int g=5;        //global variable
void fun()
{
    int g=10;       //local variable
    {
        int g=20;
        cout<<g<<endl;      //varibales have block level scope
    }        
    cout<<g<<endl;      //compiler will look for the declaration of variable in nearest scope
    cout<<::g<<endl;        //used for accessing global g
}
int main()
{
    cout<<g<<endl;
    fun();
    cout<<g<<endl;
    return 0;
}