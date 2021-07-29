#include <iostream>
using namespace std;
int prime(int n)
{   
    int flag=1;
    for (int i = 2; i < n; i++)
{
    if (n%i==0)
    {
        flag=0;
        break;
    }
  
    
}
    if (flag)
    {
        return 1;
    }
    else
    {
        return 0;
    }

    
}
int main()
{
     int n1,n2;
     cin>>n1>>n2;
     for ( ; n1 <= n2  ; n1++)
     {
         if (prime(n1))
         {
             cout<<n1<<" ";
         }
         
     }
     
cout<<endl;
}