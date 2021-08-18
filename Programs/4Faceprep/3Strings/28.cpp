 //Program to reverse a string

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char st[30];
    gets(st);

    for(int i=strlen(st)-1;i>=0;i--)
    {
        cout<<st[i];
    }
      
 
}