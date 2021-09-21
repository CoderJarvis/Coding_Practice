// C Program to Multiply Two Matrices Using Multi-dimensional Arrays

#include <iostream>
using namespace std;
int main()
{

     cout<<"enter the rors and column\n";
     int r,c;
     cin>>r>>c;
     int m1[r][c];
     int m2[r][c];
     int m3[r][c];
     cout<<"enter the elements into the first matrix\n";
     for(int i=1;i<=r;i++)
     {
         for(int j=1;j<=c;j++)
         {
             cin>>m1[i][j];
         }
     }
    cout<<"ehter the elements of the second array\n";
    for (int i = 1; i <= r; i++)
    {
        for(int j=1;j<=c;j++)
        {
            cin>>m2[i][j];
        }
    }

    cout<<"the elements of the first array is\n";
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"the elements of the second array is\n";
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }

//this is the main logic of the program
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
           m3[i][j]=m1[i][j]  *  m2[i][j];
        }
    }
    cout<<"the multiplication of the two array is\n";
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cout<<m3[i][j]<<" ";
        }
        cout<<endl<<" ";
    }
    
}
