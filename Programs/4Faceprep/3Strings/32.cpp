// A string is given as input in which all the lower case letters are converted to upper case and the upper case letters are converted to lower case

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
     string st;
     cin>>st;

     for(int i=0;i<st.length();i++)
     {
         if(st[i] >=65 && st[i] <=90) 
         {
             st[i]=st[i]+32;
         }
       else  if(st[i]>=97 && st[i]<=122) 
         {
             st[i]=st[i]-32;
         }

     }

     cout<<st;
     


}