#include <iostream>
#include <string.h>
using namespace std;
int main()
{
     char st1[100],st2[100],st3[100];
    gets(st1);
    gets(st2);
    gets(st3);

     for(int i=0;i<strlen(st1);i++)
     {
         if(st1[i] == 'a' || st1[i] == 'e' ||st1[i] == 'i' ||st1[i] == 'o' ||st1[i] == 'u')
         st1[i]='*';    
     }
     for(int i=0;i<strlen(st2);i++)
     {
         if(!(st2[i] == 'a' || st2[i] == 'e' ||st2[i] == 'i' ||st2[i] == 'o' ||st2[i] == 'u'))
         st2[i]='@';    
     }
     for(int i=0;i<strlen(st3);i++)
     {
         if(st3[i] >='a' && st3[i]<='z')
         st3[i]=(char)(st3[i]-32)   ; 
     }
     cout<<st1<<st2<<st3;


}