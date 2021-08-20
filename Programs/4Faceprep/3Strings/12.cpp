#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string st="saswat kumar panda";

        st[0]=(char)(st[0]-32);
        st[st.length()-1]=(char)(st[st.length()-1]-32);

        for(int i=0;i<st.length();i++)
        {
            if(st[i]==' ')
            {
                st[i-1]=(char)(st[i-1]-32);
                st[i+1]=(char)(st[i+1]-32);
            }
        }
    
         cout<<st;
    
}