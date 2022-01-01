#include<bits/stdc++.h>
using namespace std;
void show(vector<int> v)
{
    for(auto val : v)
    {
        cout<<val<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    vector<int> v;
    
    // write your code here
    for(int i=0;i<n;i++)
    {   
        int d=i;
        for(int j=i;j<n;j++)
        {
            while(d<=j)
            {
                v.push_back(arr[d]);
                d++;
            }
            show(v);
            cout<<endl;
        }
        v.clear();
    }
    
}