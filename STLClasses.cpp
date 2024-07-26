#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v ={2,4,6,8,10};
    v.push_back(20);
    v.push_back(30);
    v.pop_back();

    cout<<"Using for each loop: ";
    for(int x: v)
        cout<<x<<" ";
    cout<<endl;

    cout<<"Using Iterator: ";
    vector <int> :: iterator itr;
    for(itr=v.begin(); itr!=v.end(); itr++)
        cout<<++*itr<<" ";      //we can not only just read but also modify values using iterators

    return 0;
}