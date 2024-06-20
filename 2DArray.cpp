#include <iostream>
using namespace std;
int main()
{
    int A[100][100], r, c;
    cout<<"Enter no of rows: "; cin>>r;
    cout<<"Enter no of columns: "; cin>>c;
    cout<<"Enter elements: ";
    for(int i=0; i<r; i++)       //take input for array
    {
        for(int j=0; j<c; j++)
        {
            cin>>A[i][j];
        }
        cout<<endl;
    }
    cout<<"2D array is: "<<endl;
    for(int i=0; i<r; i++)       //display 2D array
    {
        for(int j=0; j<c; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}