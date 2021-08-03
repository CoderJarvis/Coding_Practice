#include <iostream>
using namespace std;
int main()
{
    int n;
     cin>>n;
     if(n<=100)
     {
         n=2*n;
     }
     else if(n<=200)
     {
         n=200+(n-100)*3;
     }
     else if(n<=300)
     {
         n=200+300+(n-300)*4;
     }
     else
     n=200+300+400+(n-300)*5;

     cout<<n;


}