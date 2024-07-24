#include <iostream>
#include <fstream>

using namespace std;

class student
{
public:
    string name;
    int roll;
    string branch;
    friend ifstream & operator >> (ifstream &ifs, student &s);
};

ifstream & operator >> (ifstream &ifs , student &s)
{
    ifs>>s.name>>s.roll>>s.branch;
    return ifs;
}

int main()
{
    student s1;
    ifstream ifs("Student.txt");
    ifs>>s1;        //retrieving the state of an obj in a file by overloading >> operator
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll No: "<<s1.roll<<endl;
    cout<<"Branch: "<<s1.branch<<endl;
    ifs.close();

    return 0;
}