#include <iostream>
using namespace std;
int main()
{   
    string st;
    getline(cin,st);
    string st2="";
    for(int i=0;i<st.length();i++)
    {
        if(st[i]>='a' && st[i]<='z')
        {
            st2=st2+st[i];
        }
    }
    cout<<st2<<endl;

}