#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str,rev;
    cout<<"Enter string: "; cin>>str;
    int len = str.length();
    rev.resize(len);
    for(int i=0, j=len-1; i<len; i++, j--)
    {
        rev[i]=str[j];
    }
    //rev[len]='\0';
    cout<<"Reversed string is: "<<rev<<endl;

    if(str.compare(rev)==0)
        cout<<"It is a palindrome";
    else
        cout<<"NOT";
    
    return 0;
}