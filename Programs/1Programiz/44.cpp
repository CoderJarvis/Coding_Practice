// C Program to Find Transpose of a Matrix.

#include <iostream>
using namespace std;
int main()
{

    int r,c;
    cin>>r>>c;
    int m[r][c];
    int m1[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>m[i][j];
        }
        
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
        
    }
    // main logic
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            m1[i][j]=m[j][i];
        }
    }
    cout<<endl;
    
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout<<m1[i][j]<<" ";
        }
    cout<<endl;
        
    }

}