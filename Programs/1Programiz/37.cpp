// C Program to Reverse a Sentence Using Recursion

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string st;
     getline(cin,st);

     for (int i = st.length()-1; i >=0; i--)
     {
         cout<<st[i];
     }
}
