#include <iostream>
using namespace std;
int main()
{
    int a[]={-5,-1,5,-3,-1,2,3,-6};
    int n=sizeof(a)/sizeof(a[0]);
    
    int curr=0;
    int maxTillNow=0;
    for(int i=0;i<n;i++)
    {
        curr=curr+a[i];
        if(curr<0)
        curr=0;
        maxTillNow=max(curr,maxTillNow);
    }
    cout<<maxTillNow;
}