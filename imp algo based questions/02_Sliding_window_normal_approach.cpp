#include <iostream>
using namespace std;
int main()
{
    int a[]={2,3,1,5,7,1,2,5,4,3};
    int k=3;
    int n=sizeof(a)/sizeof(a[0]);
    int max=0;
    for(int i=0;i<n-2;i++)
    {   
        max=0;
        for(int j=i;j<i+k;j++)
        {
            if(a[j]>max)
            max=a[j];
        }
        cout<<max<<" ";
    }
}