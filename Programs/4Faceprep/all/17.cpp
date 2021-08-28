// Program to replace all 0's with 1 in a given integer

#include <iostream>
#include <string.h>
using namespace std;
int main()
{

     string st;
    cin>>st;     
    for(int i=0;i<st.length();i++)
    {
        if(st[i]=='0')
        {
            st[i]='1';

        }

    }
    cout<<st;

}
//using integer doubt