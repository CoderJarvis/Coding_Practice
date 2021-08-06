// Program to find Sum of N input Numbers in C

#include <iostream>
using namespace std;
int main()
{

     int n;
     cout<<"enter how many numbers you want to input\n";
     cin>>n;
     int x,sum=0;
     for(int i=1;i<=n;i++)
     {
         cin>>x;
         sum=sum+x;
     }
     cout<<sum;




}