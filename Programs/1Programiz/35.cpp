// C Program to Find G.C.D Using Recursion

#include <iostream>
using namespace std;
int gcd(int n1,int n2)
{   
    int gcd;
    int c=n1>n2?n2:n1;
    for (int i = 1; i <= c; i++)
    {
        if (n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
        
    }
    return gcd;   
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<gcd(n1,n2);
}
