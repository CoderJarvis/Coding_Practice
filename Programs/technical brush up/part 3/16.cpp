#include <iostream>
#include <cmath>
using namespace std;
int main()
{

     int n;
     cin>>n;
     int i,j;
     int sum=0;
     for(i=1,j=n;i<=n;i++,j--)
     {
         sum=sum+(float)pow(n,i)/j;
     }
     cout<<sum;




}