// Check if Two Strings are anagrams or not

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
     string st1="cat",st2="act";
     if(st1.length()!=st2.length())
     cout<<"not anagram";
     else{
         int a1[255]={0};
         int a2[255]={0};
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
         for(int i=0;i<256;i++)
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

     }



}

//incomplete//wrong