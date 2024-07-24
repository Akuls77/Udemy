#include <iostream>
#include <fstream>

using namespace std;

class student
{
public:
    string name;
    int roll;
    string branch;
    friend ofstream & operator << (ofstream &ofs, student &s);
};

ofstream & operator << (ofstream &ofs , student &s)
{
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}

int main()
{
    student s1;
    s1.name="Jay"; s1.roll=10; s1.branch="CS";
    ofstream ofs("Student.txt");
    ofs<<s1;        //storing the state of an obj in a file by overloading << operator
    ofs.close();

    return 0;
}