#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);

    int v=0, c=0, sp=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        while((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || str[i]==' ')
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
                v++;
            else if(str[i]==' ')
                sp++;
            else
                c++;
            break;
        }
    }
    cout<<"Vowels are: "<<v<<endl;
    cout<<"Consonants are: "<<c<<endl;
    cout<<"Words are: "<<sp+1<<endl;
    return 0;
}