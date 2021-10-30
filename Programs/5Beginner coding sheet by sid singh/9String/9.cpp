#include <iostream>
using namespace std;
int main()
{
    string st;
    getline(cin,st);
    st[0]=(st[0]-32);
    for(int i=0;i<st.length();i++)
    {
        if(st[i]==' ')
        st[i+1]=(st[i+1]-32);
    }
    cout<<st;
}