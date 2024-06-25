#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[50];
    cout<<"Enter string: ";
    cin.getline(s,50);
    cout<<"Length of string is: "<<strlen(s)<<endl<<endl;   //used to calculate length of string

    char s1[20]="Good";
    char s2[20]="Morning";
    strcat(s1,s2);      //concatenates 2 strings
    cout<<s1<<endl;

    char p1[20]="Good";
    char p2[20]="Morning";
    strncat(p1,p2,3);     //concatenates particular length of char from string2 to string1
    cout<<p1<<endl<<endl;

    char a1[20]="a";
    char a2[20]="Hello";
    strcpy(a1,a2);     //copies content from string2 to string1
    cout<<a1<<endl;

    char b1[20]="Good";
    char b2[20]="Morning";
    strncpy(b1,b2,2);     //copies particular length of char from string2 to string1
    cout<<b1<<endl<<endl;

    char l1[]="Programming";
    char l2[]="gram";
    if(strstr(l1,l2)!=NULL)
        cout<<strstr(l1,l2)<<endl;     //used to find substring s2 from main string s1
    else
        cout<<"Not Found!!";

    char d1[]="Programming";
    cout<<strchr(d1,'r')<<endl;        //gives occurence of char in a string
    cout<<strrchr(d1,'r')<<endl<<endl;       //gives occurence of char from right side in a string

    char n1[]="apple";
    char n2[]="Apple";
    cout<<strcmp(n1,n2)<<endl<<endl;     //compares 2 strings in alphabetical order and returns -1 if n1<n2 and 0 if n1=n2 and 1 if n1>n2

    char f1[]="546";
    char f2[]="253.46";
    long int x = strtol(f1,NULL,10);     //converts string to long int
    float y = strtof(f2,NULL);           //converts string to float
    cout<<x<<" "<<y-15<<endl<<endl;

    char h[]="x=20;y=15;z=35";
    char *token = strtok(h,"=;");       //used to tokenise the sting where x,20,y,15... are tokens
    while (token!=NULL)
    {
        cout<<token<<endl;
        token = strtok(NULL,"=;");
    }

    return 0;
}