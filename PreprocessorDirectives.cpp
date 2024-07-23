#include <iostream>
using namespace std;

#define PI 3.1425

#ifndef PI          //if PI is not define
    #define PI 3
#endif

#define max(x,y) (x>y?x:y)
#define msg(x) #x

int main()
{
    cout<<PI<<endl;
    cout<<max(10,20)<<endl;
    cout<<msg(Hello)<<endl;
    return 0;
}