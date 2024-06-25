#include <iostream>
#include <string>               //used to include string class
using namespace std;
int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);           //used to read multiple characters of string
    cout<<str<<endl;

    cout<<"Enter string again: ";
    cin>>str;                   //no need to use ignore function if we are using cin function 2 times
    cout<<str<<endl;           
    cin>>str;
    cout<<str<<endl;
    return 0;
}