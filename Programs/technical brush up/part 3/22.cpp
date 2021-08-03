#include <iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int sum=0;
     for(int i=1;i<=n;i++)
     {
         if(n%i==0)
         {
             sum=sum+i;
         }
     }

     if(sum==2*n)
     cout<<"its a perfect number";
     else cout<<"its not a perfect number";





}