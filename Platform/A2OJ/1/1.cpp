#include <iostream>
using namespace std;

int main()
{
	int t;
	int a,b;
	int i=0;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++)
	{
		cin>>a>>b;	
		arr[i]=a+b;
	}
	for(int i=0;i<t;i++)
	{
		cout<<arr[i]<<endl;
	}

}
