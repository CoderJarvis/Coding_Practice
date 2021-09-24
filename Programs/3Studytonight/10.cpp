// Program to reverse a String.

#include <iostream>
#include <string.h>

using namespace std;
int main()
{
     char st[20];
     gets(st);
     int n=strlen(st);
    //  printf("%s\n",st);
    //  cout<<st[n-1]<<endl;
    //  for(int i=n-1;i>=0;i--)
    //  {
    //      printf("%c",st[i]);
    //  }

    int i,j;

    for(i=0,j=n-1;i<j;i++,j--)
    {
        char c;
        c=st[i];
        st[i]=st[j];
        st[j]=c;
    }

    printf("%s",st);   
}
