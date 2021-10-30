#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int r,sum=0;
    while(n)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(temp==sum)
    cout<<"its an armstrong number";
    else
    cout<<"not an armstrong number";

}