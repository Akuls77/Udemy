#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s="Programming";
    string::iterator it;
    for(it=s.begin(); it!=s.end(); it++)        //begin and end are functions of iterator
    {
        cout<<*it;         //* because it acts as a pointer
    }
    cout<<endl;

    string::reverse_iterator rit;
    for(rit=s.rbegin(); rit!=s.rend(); rit++)       //rbegin and rend are functions of reverse iterator
    {
        cout<<*rit;
    }
    return 0;
}