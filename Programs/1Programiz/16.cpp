// C Program to Find LCM of two Numbers

#include <iostream>
using namespace std;
int main()
{

     int n1,n2;
     int lcm;
     cin>>n1>>n2;
     for (int i = 1; i <= n1*n2;i++)
     {
         if(i%n1==0 && i%n2==0)
         {

         lcm=i;
         break;
         }
     }

     cout<<lcm<<endl;
     
}