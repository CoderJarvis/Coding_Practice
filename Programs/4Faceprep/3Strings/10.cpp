#include <iostream>
#include <string.h>
using namespace std;
int main()
{
     string st;
     getline(cin,st);
     string st2;
     for(int i=0;i<st.length();i++)
     {
         if(st[i]==' ')
         continue;
         else
         st2.push_back(st[i]);
         
     }
     cout<<st2;


}