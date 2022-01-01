#include <iostream>
using namespace std;
int isPalindrome(string st)
{
    for(int i=0,j=st.length()-1;i<j;i++,j--)
    {
        if(st[i]!=st[j])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    string st1="f sfdfgg aaabbbaaa noon fjig aa jighng madam";
    string st2,st3;

    for(int i=0;i<st1.length()-1;i++)
    {
        while(st1[i]!=' ')
        {
            st2.push_back(st1[i]);
            i++;
            if(i==st1.length()-1)
            break;
        }
        if(isPalindrome(st2))
        {
            if(st2.length()>st3.length())
            {
                st3=st2;
            }
        }
        st2="";
    }
    cout<<st3;
}