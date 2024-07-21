#include <iostream>
using namespace std;

class MyException1
{};

class MyException2 : public MyException1
{};

int main()
{
    try
    {
        throw MyException1();
    }
    catch(MyException2 e)
    {
        cout<<"Int catch"<<endl;
    }
    catch(MyException1 e)
    {
        cout<<"Double catch"<<endl;
    }
    catch(...)      //works like universal catch and it should come at last only
    {
        cout<<"All catch"<<endl;
    }
    return 0;
}