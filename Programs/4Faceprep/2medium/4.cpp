#include <iostream>
using namespace std;
int main()
{

     int n;
     cin>>n;

     int r;
     while (n)
     {
         r=n%10;
         if(r==0)
         {
             r=1;
         }
         n=n/10;
     }
     




}