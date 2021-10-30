#include <iostream>
using namespace std;
int main()
{
    string st1;
    string st2="";
    getline(cin,st1);
    for(int i=st1.length()-1;i>=0;i--)
    {
        st2.push_back(st1[i]);
    }
    if(st1==st2)
    cout<<"its a palindrome"<<endl;
    else
    cout<<"not a palindrome"<<endl;
}