#include <iostream>
using namespace std;
int main()
{   
    string st1;
    getline(cin,st1);
    string st2="";
    for(int i=0;i<st1.length();i++)
    {
        if(st1[i]>='a' && st1[i]<='z')
        {
            st2.push_back(st1[i]);
        }
    }
    cout<<st2<<endl;

}