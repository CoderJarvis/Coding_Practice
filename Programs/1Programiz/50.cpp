// C Program to Find the Frequency of Characters in a String

#include <iostream>
#include <string>

using namespace std;
int main()
{

   string st="saswat kumar sk";
   char c;
   cin>>c;
   int count=0;

   for(int i=0;i<st.length();i++)
   {
      if(st[i]==c)
      count++;
   }

   // cout<<st[6];
   cout<<count;


}