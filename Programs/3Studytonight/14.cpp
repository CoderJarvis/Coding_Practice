// Program to find first N Prime Numbers.

#include <iostream>
using namespace std;
int prime(int x)
{   
    int i;
    for(i=2;i<x;i++)
     {
         if(x%i==0)
         {
             return 0;
         }
     }

    if(i==x)
    return 1;
}
int main()
{
    int c;
    cin>>c;
   
    for(int i=2;c;i++)
    {
        if(prime(i))
        {             
            cout<<i<<" ";
            c--;
        }
    }
}
