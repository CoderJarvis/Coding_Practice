#include <bits/stdc++.h>
using namespace std;
int main()
{	
	map<int,int> m;
	vector<int> v;
	int n;
	cin>>n;
	while(n--)
	{	
		int a;
		cin>>a;
		v.push_back(a);
	}
	for(auto val:v)
	{
		m[val]++;
	}
	for(auto val:m)
	{
		cout<<val.first<<" "<<val.second<<endl;
	}
}