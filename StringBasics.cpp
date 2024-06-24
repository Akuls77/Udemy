#include <iostream>
using namespace std;
int main()
{
    char S[]= {'H','e','l','l','o','\0','p'};  //stops at null character
    cout<<S<<endl;
    char P[]={65,66,67,68,'\0'};
    cout<<P<<endl;

    char s[50];
    cout<<"Enter name: ";
    cin>>s;             //will take only one word
    cout<<s<<endl;

    cin.ignore();   //used to ignore extra char remaining after previous string 

    char p[50];
    cout<<"Enter name: ";
    cin.get(p,50);  //will take multiple words with space
    cout<<p<<endl;

    cin.ignore();

    char t[50];
    cout<<"Enter name again: ";
    cin.getline(t,50);   //getline almost similar to get function
    cout<<t<<endl;
    return 0;
}