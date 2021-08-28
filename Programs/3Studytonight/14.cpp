// Program to find first N Prime Numbers

#include <iostream>
using namespace std;
int prime(int x)
{   
    int flag;
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
    int n;
    cin>>n;



    // int count=1;
    // for(int i=2;count<=n;i++)
    // {
    //     if(prime(i))
    //     {   
    //         count++;
    //         cout<<i<<" ";
    //     }
    // }

    
    for(int i=2;n;i++)
    {
        if(prime(i))
        {             
            cout<<i<<" ";
            n--;
        }
    }



}