// Program to find Sum of N input Numbers in C

#include <iostream>
using namespace std;
int main()
{
     int n;
     cout<<"how many numbers you want to input\n";
     cin>>n;
     int x,sum=0;
     while(n--)
     {
         cin>>x;
         sum=sum+x;
     }
     cout<<sum;
}