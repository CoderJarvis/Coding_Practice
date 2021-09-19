// C Program to Display Fibonacci Sequence.

#include <iostream>
using namespace std;
int main()
{
      int n;
      cin>>n;
      int a=0;
      int b=1;
      int c=a+b;
      int i=3;

      if(n==1)
         cout<<a;
      else
         cout<<a<<" "<<b<<" ";

      while(i<=n)
      {
         
         cout<<c<<" ";
         a=b;
         b=c;

         c=a+b;
         i++;
      }
}