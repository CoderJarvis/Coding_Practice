// C Program to Copy String Without Using strcpy()

#include <iostream>
using namespace std;
int main()
{
    char st1[30]="saswat kumar sk";
    char st2[30];
    // cout<<st2[20]; //unused spaces in the string filled with '\0',if u try to print there ll be no output
    int i=0;
    while (st1[i]!='\0')
    {
        st2[i]=st1[i];
        i++;
    }
    st2[i]='\0'; //important

    printf("%s",st2);
}
