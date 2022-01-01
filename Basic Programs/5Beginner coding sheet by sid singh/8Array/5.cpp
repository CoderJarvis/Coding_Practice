#include <iostream>
using namespace std;
int main()
{
    int a[100][100];
    int b[100][100];
    int result[100][100];
    int r,c;
    cin>>r>>c;
    cout<<"enter elements of first array"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter elements of second array"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }


    // main logic
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            result[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"the resultant matrix is\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}