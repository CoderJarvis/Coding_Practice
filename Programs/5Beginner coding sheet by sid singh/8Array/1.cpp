#include <iostream>
using namespace std;
int main()
{
    float a[100];
    int n;
    cin>>n;
    float sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<"average is : "<<(sum/n)<<endl;
}