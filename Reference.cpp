#include <iostream>
using namespace std;
int main()
{
    int x=10;
    int &y=x;    //y is reference to the variable x (i.e) y is a nickname of x
    cout<<y<<endl;
    x++;
    y++;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<&x<<" "<<&y<<endl;   //adress of x and y both are same
    return 0;
}