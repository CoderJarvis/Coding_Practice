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
	string s2,s3;
	int d;
	string s1="Hdtcgfduknracecarkkfdimamyy";
	for(int i=0;i<s1.length();i++)
	{	
		d=i;
		for(int j=i+1;j<s1.length();j++)
		{
			while(d<=j)
			{
				s2.push_back(s1[d]);
				if(isPalindrome(s2))
				{
					if(s2.length()>s3.length())
					{
						s3=s2;
					}
				}
					d++;
			}
		}
			s2="";
	}
	cout<<s3;
}