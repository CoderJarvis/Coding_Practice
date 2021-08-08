// C Program to Check Armstrong Number

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
     cin>>n;
    int temp=n;
    int sum=0;
    while (n>0)
    {
        int r=n%10;
        sum=sum+r*r*r;

        n=n/10;
    }
    if (sum==temp)
    {
        cout<<"armstrong number\n";
    }
    else
    {
        cout<<"not an armstrong number\n";
    }
    cout<<sum;
    
    
    



cout<<endl;
}