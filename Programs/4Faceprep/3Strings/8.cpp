#include <iostream>
#include <string.h>
using namespace std;
int notBracket(char c)
{
    if( c=='(' || c==')')
    {
        return 0;
    }
    else 
    return 1;
}
int main()
{
     string st;
     getline(cin,st);
     string st2;

     for(int i=0;i<st.length();i++)
     {  
        //  just printing by skipping
        //  if(st[i]=='(' || st[i]==')')
        //  {
        //      continue;
        //  }
        //  else
        //  cout<<st[i];
        // using 2nd string and pushing
        if(notBracket(st[i]))
        st2.push_back(st[i]);
     }
     cout<<endl<<st2;


}