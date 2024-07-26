#include <iostream>
#include <map>      //map is useful when u need to perform search operation more often on data structure

using namespace std;

int main()
{
    map<int, string> m;
    m.insert(pair<int,string>(1,"John"));
    m.insert(pair<int,string>(2,"Cena"));
    m.insert(pair<int,string>(3,"Diwanshu"));

    map<int,string> :: iterator itr;
    for(itr = m.begin(); itr!=m.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;       //first to display int and second to display string
    }

    map<int,string> :: iterator itr1;
    itr1 = m.find(2);
    cout<<"Value found is: ";
    cout<<itr1->first<<" "<<itr1->second<<endl;

    return 0;
}