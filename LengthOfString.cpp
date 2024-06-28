#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str ="WELCOME";
    int cnt=0;
    for(int i=0; str[i]!='\0'; i++)     //write \0 in single quotes only
    {
        cnt++;
    }
    cout<<"Length is: "<<cnt<<endl;

    string::iterator it;
    int icnt=0;
    for(it=str.begin(); it!=str.end(); it++)
    {
        icnt++;
    }
    cout<<"Length using iterator is: "<<icnt<<endl;
    return 0;
}