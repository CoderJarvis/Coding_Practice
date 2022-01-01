#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<char,int> m;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        map<int,char> m2;
        int i=1;
        for(auto val:m)
        {
            cout<<val.second<<" "<<val.first<<endl;
        }
    }
}