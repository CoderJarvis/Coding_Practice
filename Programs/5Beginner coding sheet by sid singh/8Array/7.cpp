#include <iostream>
using namespace std;
int main()
{
    int a[100][100];
    int b[100][100];
    int r,c;
    cin>>r>>c;
    cout<<"enter elements into array"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            b[i][j]=a[j][i];
        }
    }

    cout<<"transpose of the matrix"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<b[i][j];
        }
        cout<<endl;
    }

}