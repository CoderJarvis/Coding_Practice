// Remove vowels from a string and return the string with consonants

#include <iostream>
#include <string.h>
using namespace std;
int consonant(char s)
{
    if(s=='a' || s=='e' || s=='i' || s=='o'||s=='u')
    return 0;
    else
    return 1;
}

int main()
{
     string st1;
     cin>>st1;
     string st2;

     for(int i=0;i<st1.length();i++)
     {
         if(consonant(st1[i]))
         {
             st2.push_back(st1[i]);
         }
     }
     cout<<st2;

}