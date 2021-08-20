#include <iostream>
#include <string.h>
using namespace std;
int main()
{
     string st;
     getline(cin,st);
     for(int i=0;i<st.length()-1;i++)
     {
         for(int j=i+1;j<st.length();j++)
         {  
             char c;
             if(st[i]>st[j])
             {
                 c=st[i];
                 st[i]=st[j];
                 st[j]=c;
             }
         }
     }
     cout<<st;


}