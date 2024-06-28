#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1="market";
    cout<<s1.length()<<endl;
    cout<<s1.size()<<endl;

    cout<<s1.capacity()<<endl;   //if we increase the length of the string ,it would dynamically increase the size of array
    
    s1.resize(30);               //changes the capacity of the array where it would store the string
    cout<<s1.capacity()<<endl;
    
    cout<<s1.max_size()<<endl;   //gives possible max size of string that can be stored

    s1.clear();
    cout<<s1<<endl;     //clears the content of string

    if(s1.empty())         //checks whether string is empty or not
        cout<<"String is empty"<<endl;
    
    string s3="Hello";
    cout<<s3.append("World")<<endl;       //adds new content to the string at end

    cout<<s3.insert(3,"Apple")<<endl;       //inserts given string at given index

    string s2="Banana";
    cout<<s2.insert(3,"Apple",2)<<endl;     //2 would insert only Ap into the s2

    cout<<s2.replace(3,2," ")<<endl;        //3 represents starting pos of replacing and 2 represents no of words to be replaced

    s2.push_back('1');                      //inserts single char at end of string
    cout<<s2<<endl;
    s2.pop_back();                          //removes last char of string
    cout<<s2<<endl;

    s2.swap(s3);                            //swaps 2 strings
    cout<<s2<<" "<<s3<<endl;

    string s="Welcome";
    char str[10];
    s.copy(str,s.length());              //copy content of string in a char array
    cout<<str<<endl;

    string g="How are you";
    cout<<g.find("are")<<endl;      //find occurence of char or str from main string
    cout<<g.find('o')<<endl;
    cout<<g.rfind('o')<<endl;       //from reverse direction
    
    string q="Hello World";
    cout<<q.find_first_of('l')<<endl;       //find first occurence i.e from left
    cout<<q.find_first_of('l',3)<<endl;     //find char from the given index
    cout<<q.find_last_of('l')<<endl;        //find last occurence i.e from right

    string t="Programming";
    cout<<t.substr(3,4)<<endl;      //will take out part of string from index 3 upto 4 char

    string h1="Akul";
    string h2="Hello";
    string h3="Hello";
    cout<<h2.compare(h1)<<endl;     //compares 2 strings and return -1,0,1 according to position in dictionary
    cout<<h3.compare(h2)<<endl;

    string i="Holiday";
    cout<<i.at(3)<<endl;        //gives char at particular index
    cout<<i.front()<<endl;      //gives first letter of string
    cout<<i.back()<<endl;       //gives last letter of string

    string o="Hello";
    string o1="Hi";
    cout<<o+" World"<<endl;     //+ operator concatenates 2 strings
    o1=o;                       //= operator copies content of string o and store it in o1
    cout<<o1<<endl;

    return 0;
}