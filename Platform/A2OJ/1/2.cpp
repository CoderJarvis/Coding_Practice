#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int> v;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        int arr[a];
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
        }
        int sum=0;
        for(int i=0;i<a;i++)
        {
            int q=arr[i]/b;
            sum=sum+q;
        }
        v.push_back(sum);
    }
    for(auto val:v)
    {
        cout<<val<<endl;
    }
}