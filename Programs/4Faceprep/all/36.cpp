 // Program to copy a string

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char st1[10];
    char st2[5];
    gets(st1);
    strcpy(st2,st1);
    cout<<st2;
}