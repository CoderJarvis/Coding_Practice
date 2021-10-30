#include <iostream>
using namespace std;
int main()
{
    string st1,st2="";
    getline(cin,st1);
    for(int i=0;i<st1.length();i++)
    {
        if((st1[i]>='a' && st1[i]<='z') || (st1[i]>='A' && st1[i]<='Z'))
        st2.push_back(st1[i]+1);
        else
        st2=st2+st1[i];
    }

    // cout<<st2;
    // char c;
    // c='A';
    // cout<<c+1<<endl; //66
    // cout<<(char(c+1))<<endl; //B
    // char result=c+1;
    // cout<<result;//B
}