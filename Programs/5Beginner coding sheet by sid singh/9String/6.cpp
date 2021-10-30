#include <iostream>
using namespace std;
int main()
{
    string st1,st2="";
    getline(cin,st1);
    for(int i=0;i<st1.length();i++)
    {
        if((st1[i]>='a' && st1[i]<='z') || (st1[i]>='A' && st1[i]<='Z'))
        st2=st2+char(st1[i]+1);
        else
        st2=st2+st1[i];
    }

    cout<<st2;
    // char c;
    // c='A';
    // cout<<c+1<<endl; //66
}