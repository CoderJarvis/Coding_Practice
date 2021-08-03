#include <iostream>
#include <cmath>
using namespace std;
int main()
{

     int n;
     cin>>n;
    // int i=0;
    //  for(i=0;i<=n;i++)
    //  {
    //      if(i*i==n)
    //      {
    //          cout<<"its a pefect square";
    //          break;
    //      }

    //  }
    //  if (i==n+1)
    //  {
    //      cout<<"not a perfect square";
    //  }
     
     int a=sqrt(n);
     if(a*a==n)
     {
         cout<<"its a perfect square\n";
     }
     else
     cout<<"not a pefect square\n";
    




}