#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int lower=a>b?b:a;
    int hcf;
    for(int i=1;i<=lower;i++)
    {
        if(a%i==0 && b%i==0)
        hcf=i;
    }
    cout<<"hcf of "<<a<<" & "<<b<<" is "<<hcf<<endl;
}