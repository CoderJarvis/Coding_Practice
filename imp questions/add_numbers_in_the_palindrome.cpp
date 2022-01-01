#include <bits/stdc++.h>
using namespace std;
int isPalindrome(string s)
{
    for(int i=0,j=s.length()-1;i<j;i++,j--)
    {
        if(s[i] != s[j])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    string s;
    s="madam";
    if(isPalindrome(s))
    {
        cout<<"its a palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
}