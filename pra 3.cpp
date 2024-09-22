#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"enter row 1 and column 1 : "<<endl;
    int r1,c1;
    cin>>r1>>c1;
    int A[r1][c1];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"enter row 2 and column 2 : "<<endl;
    int r2,c2;
    cin>>r2>>c2;
       int B[r2][c2];
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>B[i][j];
        }
    }
    if(c1!=r2){cout<<"invalid result !"<<endl;}
int C[r1][c2];
for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
int value=0;
for(int k=0;k<r1;k++)
        {
value+=A[i][k]*B[k][j];
        }
        C[i][j]=value;
        }
    }
    cout<<"the product of the array is : "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        { cout<<C[i][j]<<" ";}
        cout<<endl;
        }
        return 0;
}