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
             flag=0;
             break;
         }
     }

     if(i==x)
     flag=1;
}
int main()
{
    int n;
    cin>>n;
    int i=3;


     
if (i==1)
{
    cout<<"2";
}
else
{
            while(i<=n)
    {
        if(prime(i))
        {
            cout<<i<<" ";
            i++;
        }
    }
 
}



//doubt


}