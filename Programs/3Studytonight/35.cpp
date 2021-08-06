// C Program to Swap Two Numbers using Pointers

#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    char st[20];
    gets(st);
    printf("%s\n", st);
    char *p;
    p = st;
    int i, j;
    for (i = 0, j = strlen(st) - 1; i < j; i++, j--)
    {
        char c;
        c = *(st + i);
        *(st + i) = *(st + j);
        *(st + j) = c;
    }
    printf("%s\n", st);
}