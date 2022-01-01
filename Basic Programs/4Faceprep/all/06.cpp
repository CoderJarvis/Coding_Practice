// Program to find the sum of numbers in a given range

#include <iostream>
using namespace std;
int main()
{

     int n1,n2;
     cin>>n1>>n2;
      int sum=0;
     while(n1<=n2)
     {
         sum=sum+n1;

         n1++;
     }

     cout<<sum;


}