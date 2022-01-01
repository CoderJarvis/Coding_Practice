//C Program to Reverse a Sentence Using Recursion

#include <iostream>
using namespace std;
int main()
{
     string st;
     getline(cin,st);
    char c;
     for(int i=0,j=st.length()-1;i<j;i++,j--)
     {
         c=st[i];
         st[i]=st[j];
         st[j]=c;
     }
    cout<<st;

}