// C Program to Multiply two Matrices by Passing Matrix to a Function.
//not completed

#include <iostream>
using namespace std;
void inputData(int m1[][10],int m2[][10],int r1,int c1,int r2,int c2)
{
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>m1[i][j];
        }
    }
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>m2[i][j];
        }
    }
}


void multiply(int m1[][10],int m2[][10],int m3[][10],int r1,int c1,int r2,int c2)
{
    // for(int i=0;i<r1;i++)
    // {
    //     for(int j=0;j<c2;j++)
    //     {
    //         m3[i][j]=0;
    //     }
    // }

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            m3[i][j]=m1[i][j]*m2[i][j];
        }
    }

}

void displayData(int m3[][10],int r1,int c2)
{
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<m3[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
int r1,c1;
int r2,c2;

cin>>r1>>c1;
cin>>r2>>c2;

if(c1!=r2)
{
    cout<<"multiplication not possible\n";
}
else{

int m1[10][10];
int m2[10][10];
int m3[10][10];

inputData(m1,m2,r1,c1,r2,c2);
multiply(m1,m2,m3,r1,c1,r2,c2);
displayData(m3,r1,c2);

}

}








