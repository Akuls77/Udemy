#include <iostream>
using namespace std;

class employee
{
private:
    int empid;
    string name;
public:
    employee(int e, string n)
    {
        empid=e;
        name=n;
    }
    int getempid()
    {
        return empid;
    }
    string getname()
    {
        return name;
    }
};


class ftemp : public employee     //full time employee with salary
{
private:
    int sal;
public:
    ftemp(int e, string n, int s) : employee (e,n)
    {
        sal=s;
    }
    int getsal()
    {
        return sal;
    }
};


class ptemp : public employee     //part time empoylee with daily wages
{
private:
    int wage;
public:
    ptemp(int e, string n, int w) : employee (e,n)
    {
        wage = w;
    }
    int getwage()
    {
        return wage;
    }
};

int main()
{
    ptemp p1(1, "Raj", 300);
    ftemp f1(2, "Sahil", 45000);

    cout<<"Daily wage of "<<p1.getname()<<" is "<<p1.getwage()<<endl;
    cout<<"Salary of "<<f1.getname()<<" is "<<f1.getsal()<<endl;

    return 0;
}