#include <iostream>
#include <cmath>
using namespace std;
int main()
{

     int n;
     cin>>n;
     int sum=0;
     for(int i=0;i<=n;i++)
     {
         if(i%2==0)
         {
             sum=sum+i;
         }
         else
         sum=sum-i;
     }

     cout<<sum;
     

    // int sum1=0;
    // int sum2=0;
    // for(int i=0;i<=n;i+=2)
    // {
    //     sum1=sum1+i;
    // }
    // for(int i=1;i<=n;i+=2)
    // {
    //     sum2=sum2+i;
    // }

    // cout<<sum1-sum2;


    // for(int i=0;i<=n;i++)
    // {
    //     sum=sum+pow(-1,i)*i;
    // }
    // cout<<sum;

}

//so its one problem can be solved by 3 method you have to chooe ur uptimise code