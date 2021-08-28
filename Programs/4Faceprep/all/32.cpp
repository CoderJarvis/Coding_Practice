// Find the first non-repeating character in a string

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
     string st="saswat";
     int flag=1;
    char c;
    int k;
     for(int i=0;i<st.length();i++)
     {  
         c=st[i];
         for(int j=i+1,k=j-1;j<st.length() || k>=st[0];j++,k--)
         {
             if(c==st[j] || c==st[k])
            {
                 flag=0;
                 break;
            }
             
         }

         if(flag)
         {
             cout<<c;
         }
         else
         cout<<"y";

     }

    for(int i=0;i<st.length();i++)
    {
        
    }


}

//incomplete wrong