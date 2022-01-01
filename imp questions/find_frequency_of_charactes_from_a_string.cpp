#include <bits/stdc++.h>
using namespace std;
int main()
{	
	unordered_map<char,int> m;
	string s="saswat kumar panda";
	for(int i=0;i<s.length();i++)
	{
		m[s[i]]++;
	}

	for(auto val:m)
	{
		cout<<val.first<<" "<<val.second<<endl;
	}
}