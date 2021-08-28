// Find the first non-repeating character in a string

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
     string st="saswat";
     int flag=1;

     for(int i=0;i<st.length();i++)
     {
         for(int j=i+1;j<st.length();j++)
         {
             if(st[i]==st[j])
            {
                 flag=0;
                 break;
            }
             
         }

         if(flag)
         {
             cout<<st[i];
         }
         else
         cout<<"y";

     }


}

//incomplete wrong