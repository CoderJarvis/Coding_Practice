// C program to calculate the power using recursion

#include <iostream>
using namespace std;
int power(int n,int p)
{
  if (n!=0)
  {
      return (n*power(n,p-1));
  }
  else
  {
      return 1;
  }
  
  
}
int main()
{

     int n,p;
     cin>>n>>p;
     cout<<power(n,p);




cout<<endl;
}