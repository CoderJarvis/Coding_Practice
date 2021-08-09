#include <iostream>
using namespace std;
int prime(int x)
{   
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        return 0;
    }

    if(i==x)
    return 1;
}
int main()
{

     int n1,n2;
     cin>>n1>>n2;
     for(;n1<=n2;n1++)
     {
         if(prime(n1))
         cout<<n1<<" ";
     }




}