#include <iostream>
using namespace std;
int main()
{
    int n, r, rev=0;
    cout<<"Enetr n: "; cin>>n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev = (rev*10)+r;
    }
    cout<<rev<<endl;     //printing the no in reverse way

    int p;
    while(rev>0)
    {
        p=rev%10;
        rev=rev/10;
        switch(p)
        {
            case 1:
                cout<<"One"<<" ";
                break;
            case 2:
                cout<<"Two"<<" ";
                break;
            case 3:
                cout<<"Three"<<" ";
                break;
            case 4:
                cout<<"Four"<<" ";
                break;
            case 5:
                cout<<"Five"<<" ";
                break;
            case 6:
                cout<<"Six"<<" ";
                break;
            case 7:
                cout<<"Seven"<<" ";
                break;
            case 8:
                cout<<"Eight"<<" ";
                break;
            case 9:
                cout<<"Nine"<<" ";
                break;
            case 0:
                cout<<"Zero"<<" ";
                break;

            cout<<p;
        }  
    }
    return 0;
}