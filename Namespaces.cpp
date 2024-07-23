#include <iostream>
using namespace std;

namespace first
{
    void fun()
    {
        std::cout<<"First"<<endl;
    }
}

namespace second
{
    void fun()
    {
        std::cout<<"Second"<<endl;
    }
}

int main()
{
    first::fun();
    second::fun();
    return 0;
}