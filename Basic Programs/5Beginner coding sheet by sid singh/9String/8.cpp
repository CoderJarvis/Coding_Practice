#include <iostream>
using namespace std;
int main()
{
    string st;
    getline(cin,st);
    int count=0;
    for(int i=0;i<st.length();i++)
    {
        if(st[i]==' ')
        count++;
    }
    cout<<"number of words :"<<count+1;
}