#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    int A[7]= {4,8,6,9,5,2,7};
    for(auto x: A)   //for each loop  
    //auto will automatically take the data type of array
    {
        sum = sum + x;
    }
    cout<<"Sum is: "<<sum;
    return 0;
}