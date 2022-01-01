// Check if Two Strings are anagrams or not

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
     string st1="state",st2="taste";
     if(st1.length()!=st2.length())
     cout<<"not anagram";
     else{
         int a1[256]={0};
         int a2[256]={0};
         for(int i=0;i<st1.length();i++)
         {
             a1[st1[i]]++;
         }

         for(int i=0;i<st2.length();i++)
         {
             a2[st2[i]]++;
         }
        int flag=1;
        //wrong here
         for(int i=0;i<=255;i++)
         {
             if(a1[i]!=a2[i])
             {
                 flag=0;
                 break;
             }
         }
         if(flag)
         cout<<"anagram";
         else
         cout<<"not anagram";

        // for(int i=0;i<=255;i++)
        // {
        //     cout<<i<<" "<<a2[i]<<endl;
        // }
        // cout<<endl;
        // for(int i=0;i<=255;i++)
        // {
        //     cout<<i<<" "<<a2[i]<<endl;
        // }
     }



}

//incomplete//wrong