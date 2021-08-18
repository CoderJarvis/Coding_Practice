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

    int n;
    cin>>n;
    int i;
    int flag=0;
     for(i=2;i<=n/2;i++)
     {
        
         for(int j=n/2;j<=n;j++)
         {
             if(i+j==n)
             {
                 if(prime(i) && prime(j))
                {
               cout<<"its is possible with values "<<i<<" "<<j<<endl;
                 flag=1;                 
                }
             }
         }

  
     }

     if(flag==0)
     {
         cout<<"not possible\n";
     }


}