// C Program to Display Prime Numbers Between Two Intervals

#include <iostream>
using namespace std;
int isPrime(int n)
{   
    if(n==1)
    return 0;
    else
    {
        int flag=1;
        int i=2;
        for(;i<n;i++)
        {
            if (n%i==0)
            {
                return 0;
            }
            
        }
        if (i==n)
        {
            return 1;
        }
    }
    
}
int main() 
{
    int n1,n2;
    cin>>n1>>n2;
    for(;n1<=n2;n1++)
    {
        if (isPrime(n1))
        {
            cout<<n1<<" ";
        }        
    }

}
