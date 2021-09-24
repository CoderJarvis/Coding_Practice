// Program to check if input Number is int or float

#include <iostream>
using namespace std;
int main()
{

     string st;
     cin>>st;
    int i;
     for(i=0;i<st.length();i++)
     {
         if(st[i]=='.')
         {
             cout<<"its a float\n";
             break;
         }
     }
     if(i==st.length())
     {
         cout<<"its a int";
     }

}