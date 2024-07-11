#include <iostream>
using namespace std;

class student
{
    private:
        int rn;
        int phymark;
        int chemmark;
        int mathmark;
        string name;

    public:
        student (int r, int p, int c, int m, string n)
        {
            rn=r;
            phymark=p;
            chemmark=c;
            mathmark=m;
            name=n;
        }

        int total()
        {
            return (phymark + chemmark + mathmark);
        }

        char grade()
        {
            float avg=total()/3;
            if(avg>=80)
                return 'A';
            else if(avg>=60 && avg<80)
                return 'B';
            else if(avg>=40 && avg<60)
                return 'C';
            else 
                return 'F';
        }

        string getname()
        {
            return name;
        }
};

int main()
{
    student s(20, 30, 80, 95, "Aum");
    cout<<"Student name is: "<<s.getname()<<endl;
    cout<<"Total marks are: "<<s.total()<<endl;
    cout<<"Grade is: "<<s.grade()<<endl;
    return 0;
}