// C Program to Check Whether a Number is Prime or Not.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n<=1)
        cout<<"not a prime number\n";
    else
    {
        int flag=1;
        int i=2;
        
        for (;i<n;i++)
        {
            if (n%i==0)
            {
            cout<<"not prime\n";
            break;           
            }            
        }
        if (i==n)
        {
            cout<<"prime\n";
        }   
    }
}