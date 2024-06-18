#include <iostream>
using namespace std;
int main()
{
    float ba, dis, da;
    cout<<"Enter ba: ";
    cin>>ba;

    if(ba>=100 && ba<500)
    {
        dis = (10.0/100.0)*ba;
        cout<<dis<<endl;
        da = (ba - dis);
        cout<<da;
    }
    else if(ba>=500)
    {
        dis = (20.0/100.0)*ba;
        cout<<dis<<endl;
        da = (ba - dis);
        cout<<da;
    }
    else
    {
        cout<<ba;
    }
    return 0;
}