 //Program to concatenate two strings

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char st1[20],st2[20];
    gets(st1);
    gets(st2);
    strcat(st1,st2);
    cout<<st1;
    
}