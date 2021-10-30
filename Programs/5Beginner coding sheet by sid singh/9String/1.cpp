#include <iostream>
using namespace std;
int main()
{
    string st;
    getline(cin,st);
    char c;
    cin>>c;
    int count=0;
    for(int i=0;i<st.length();i++)
    {
        if(st[i]==c)
        count++;
    }
    cout<<count;
}