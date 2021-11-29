// Program to reverse a String.

#include <iostream>
#include <string.h>

using namespace std;
int main()
{
     string st;
     getline(cin,st);
     int n=st.length();

    int i,j;

    for(i=0,j=n-1;i<j;i++,j--)
    {
        char c;
        c=st[i];
        st[i]=st[j];
        st[j]=c;
    }

    cout<<st;  
}
