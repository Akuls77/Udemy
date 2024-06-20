#include<iostream>
using namespace std;
typedef int row;
typedef int column;
int main()
{
    int A[100][100], B[100][100], Add[100][100], Sub[100][100], Mult[100][100];
    row r1,r2;
    column c1,c2;

    cout<<"Enter rows of Matrix A: "; cin>>r1;
    cout<<"Enter columns of Matrix A: "; cin>>c1;

    cout<<"Enter elements in matrix A: ";
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cin>>A[i][j];
        }
    }

    cout<<"Enter rows of Matrix B: "; cin>>r2;
    cout<<"Enter columns of Matrix B: "; cin>>c2;

    cout<<"Enter elements in matrix B: ";
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cin>>B[i][j];
        }
    }

    cout<<endl<<"Matrix A is: "<<endl;
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"Matrix B is: "<<endl;
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            Add[i][j]=A[i][j]+B[i][j];
        }
    }

    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            Sub[i][j]=A[i][j]-B[i][j];
        }
    }

    cout<<endl<<"Addition of matrix is: "<<endl;
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cout<<Add[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"Subtraction of matrix is: "<<endl;
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cout<<Sub[i][j]<<" ";
        }
        cout<<endl;
    }

    
    //Multiplication
    if(c1!=r2)
    {
        cout<<endl<<"Multiplication of matrix cannot be performed!!";
        return 0;
    }

    for(int i=0; i<r1; i++)      //since size of resultant matrix is (r1*c2)
    {
        for(int j=0; j<c2; j++)
        {
            Mult[i][j]=0;
            for(int k=0; k<c1; k++)   //instead of c1 we can take r2 also because (c1=r2)
            {
                Mult[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    cout<<endl<<"Multiplication of matrix is: "<<endl;    
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cout<<Mult[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}