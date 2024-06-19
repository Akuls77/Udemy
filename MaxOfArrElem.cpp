#include <iostream>
using namespace std;
int main()
{
    int A[7]= {4,-8,6,9,-5,2,17};
    int max=A[0];
    for(int x: A)
    {
        if(x>max)
        {
            max=x;
        }       
    }
    cout<<"Max is: "<<max;
    return 0;
}