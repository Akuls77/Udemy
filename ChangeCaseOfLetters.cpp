#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: "; cin>>str;
    for (int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]-=32;         //difference between upper and lower case is 32
        else if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
    }
    cout<<"Modified string is: "<<str<<endl<<endl;


    string str1;
    cout<<"Enter string: "; cin>>str1;
    string::iterator it;
    for(it=str1.begin(); it!=str1.end(); it++)
    {
        if(*it>='a' && *it<='z')
            *it=*it-32;
        else if(*it>='A' && *it<='Z')
            *it=*it+32;
    }
    cout<<"Modified string using iterator is: "<<str1<<endl;
    return 0;
}