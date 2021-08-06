#include <iostream>
#include <string.h>
using namespace std;
int main()
{

     char st[20];
     gets(st);
     cout<<st<<endl;
     cout<<strlen(st)<<endl;

     for (int i = strlen(st)-1; i >=0; i--)
     {
         cout<<st[i];
     }
     

cout<<endl;
}