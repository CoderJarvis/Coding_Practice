#include <iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int temp=0;
	for(int i=1;i<num;i++)
	{
		if(num%i==0)
		{
			temp=temp+i;
		}
	}
	if(temp==num)
		cout<<"its a perfect number\n";
	else
		cout<<"not a perfect number\n";
}