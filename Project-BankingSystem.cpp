#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#define min_bal 500
using namespace std;

class InsufficientFunds{};

class Account
{
private:
    long accno;
    string fname;
    string lname;
    float bal;
    static long nextaccno;
public:
    Account(){};
    Account(string fn, string ln, float b);
    long getaccno() {return accno;}
    string getfname() {return fname;}
    string getlname() {return lname;}
    float getbal() {return bal;}

    void deposit(float amt);
    void withdraw(float amt);
    static void setlastaccno(long accno);
    static long getlastaccno();
    friend ofstream & operator << (ofstream &ofs, Account &a);
    friend ifstream & operator >> (ifstream &ifs, Account &a);
    friend ostream & operator << (ostream &os, Account &a);
};
long Account :: nextaccno=0;

Account :: Account(string fn, string ln, float b)
{
    nextaccno++;
    accno=nextaccno;
    fname=fn;
    lname=ln;
    bal=b;
}

void Account ::  deposit(float amt)
{
    bal+=amt;
}

void Account :: withdraw(float amt)
{
    if(bal-amt<min_bal)
        throw InsufficientFunds();
    bal-=amt;
}

void Account :: setlastaccno(long accno)
{
    nextaccno = accno;
}

long Account :: getlastaccno()
{
    return nextaccno;
}

ofstream & operator << (ofstream &ofs, Account &a)
{
    ofs<<a.accno<<endl;
    ofs<<a.fname<<endl;
    ofs<<a.lname<<endl;
    ofs<<a.bal<<endl;
    return ofs;
}

ifstream & operator >> (ifstream &ifs, Account &a)
{
    ifs>>a.accno;
    ifs>>a.fname;
    ifs>>a.lname;
    ifs>>a.bal;
    return ifs;
}

ostream & operator << (ostream &os, Account &a)
{
    os<<"First name: "<<a.getfname()<<endl;
    os<<"Last name: "<<a.getlname()<<endl;
    os<<"Account Number: "<<a.getaccno()<<endl;
    os<<"Balance: "<<a.getbal()<<endl;
    return os;
}

class Bank
{
private:
    map<long,Account> accounts;
public:
    Bank();
    Account openacc(string fname, string lname, float bal);
    Account balenq(long accno);
    Account deposit(long accno, float amt);
    Account withdraw(long accno, float amt);
    void closeacc(long accno);
    void showallacc();
    ~Bank();
};

Bank :: Bank()
{
    Account acc;
    ifstream infile;
    infile.open("Bank.data");
    if(!infile)
    {
        return;
    }
    while(!infile.eof())
    {
        infile>>acc;
        accounts.insert(pair<long,Account>(acc.getaccno(),acc));
    }
    Account::setlastaccno(acc.getaccno());
    infile.close();
}

Account Bank :: openacc(string fname, string lname, float bal)
{
    ofstream outfile;
    Account account(fname, lname, bal);
    accounts.insert(pair<long,Account>(account.getaccno(),account));

    outfile.open("Bank.data",ios::trunc);
    map<long,Account>::iterator itr;
    for(itr=accounts.begin(); itr!=accounts.end(); itr++)
    {
        outfile<<itr->second;
    }
    outfile.close();
    return account;
}

Account Bank :: balenq(long accno)
{
    map<long,Account>::iterator itr=accounts.find(accno);
    return itr->second;
}

Account Bank :: deposit(long accno, float amt)
{
    map<long,Account>::iterator itr=accounts.find(accno);
    itr->second.deposit(amt);
    return itr->second;
}

Account Bank :: withdraw(long accno, float amt)
{
    map<long,Account>::iterator itr=accounts.find(accno);
    itr->second.withdraw(amt);
    return itr->second;
}

void Bank :: closeacc(long accno)
{
    map<long,Account>::iterator itr=accounts.find(accno);
    cout<<"Account deleted!!"<<itr->second;
    accounts.erase(accno);
}

void Bank :: showallacc()
{
    map<long,Account>::iterator itr;
    for(itr=accounts.begin(); itr!=accounts.end(); itr++)
    {
        cout<<"Account "<<itr->first<<endl<<itr->second<<endl;
    }
}

Bank::~Bank()
{
    ofstream outfile;
    outfile.open("Bank.data",ios::trunc);
    map<long,Account>::iterator itr;
    for(itr=accounts.begin(); itr!=accounts.end(); itr++)
    {
        outfile<<itr->second;
    }
    outfile.close();
}

int main()
{
    Bank b;
    Account a;

    int ch;
    string fname, lname;
    long accno;
    float bal;
    float amt;
    cout<<"\n\n------BANKING SYSTEM------"<<endl;
    do
    {
        cout<<"\nSelect one option: ";
        cout<<"\n1. Open an account ";
        cout<<"\n2. Balance enquiry ";
        cout<<"\n3. Deposit ";
        cout<<"\n4. Withdrwal ";
        cout<<"\n5. Close an account ";
        cout<<"\n6. Show all accounts ";
        cout<<"\n7. Quit \n";
        cout<<"\nEnter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter first name: "; cin>>fname;
                cout<<"Enter last name: "; cin>>lname;
                cout<<"Enter initial balance: "; cin>>bal;
                a=b.openacc(fname, lname, bal);
                cout<<endl<<"Congratulations Account is created!!"<<endl;
                cout<<a;
                break;
            case 2:
                cout<<"Enter Account Number: ";
                cin>>accno;
                a=b.balenq(accno);
                cout<<endl<<"Your account details are: "<<endl;
                cout<<a;
                break;
            case 3:
                cout<<"Enter Account Number: ";
                cin>>accno;
                cout<<"Enter amount to be deposited: ";
                cin>>amt;
                a=b.deposit(accno,amt);
                cout<<endl<<"Amount is deposited"<<endl;
                cout<<a;
                break;
            case 4:
                cout<<"Enter Account Number: ";
                cin>>accno;
                cout<<"Enter amount to be withdrawn: ";
                cin>>amt;
                a=b.withdraw(accno,amt);
                cout<<endl<<"Amount withdrawn"<<endl;
                cout<<a;
                break;
            case 5:
                cout<<"Enter Account Number: ";
                cin>>accno;
                b.closeacc(accno);
                cout<<endl<<"Account is closed"<<endl;
                cout<<a;
            case 6:
                b.showallacc();
                break;
            case 7:
                break;
        }
    }while(ch!=7);
    return 0;
}