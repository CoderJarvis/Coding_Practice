// automorphic number
// square of a number ends with the same org number

#include <iostream>
using namespace std;
int main()
{

     int n;
     cin>>n;

     int square=n*n;
     int flag=1;

     while(n)
     {
         if(n%10 != square%10)
         {
             flag=0;
             break;
         }

         n=n/10;
         square=square/10;
     }

     if(flag)
     cout<<"automorphic number\n";
     else
     cout<<"not automorphic\n";


}