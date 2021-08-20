#include <iostream>
#include <string.h>
using namespace std;
int notAlphabet(char c)
{
    if(c>='A' && c<= 'Z' || c>='a' && c<='z')
    return 0;
    else
    return 1;
}
int main()
{
     string st;
     getline(cin,st);
     for(int i=0;i<st.length();i++)
     {
         if(notAlphabet(st[i]))
         continue;
         else
         cout<<st[i];
     }

}