// C Program to find GCD of N Numbers

#include <iostream>
using namespace std;
int main()
{

     int n1,n2;
     cin>>n1>>n2;
     int low=n1>n2?n2:n1;
     int gcd;
     for(int i=1;i<=low;i++)
     {
         if(n1%i==0 && n2%i==0)
         {
             gcd=i;
         }
     }
     cout<<gcd;
     
}