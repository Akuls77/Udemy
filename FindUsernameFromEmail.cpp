#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string email="john123@gmail.com";
    int f=email.find('@');
    string uname= email.substr(0, f);
    cout<<"Username is: "<<uname<<endl;
    return 0;
}