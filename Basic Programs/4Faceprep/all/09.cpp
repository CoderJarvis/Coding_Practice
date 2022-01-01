// automorphic number
// square of a number ends with the same org number

#include <iostream>
using namespace std;
int main()
{

     int n;
     cin>>n;

     int squareofN=n*n;
     int flag=1;

     while(n)
     {
         if(n%10 != squareofN%10)
         {
             flag=0;
             break;
         }

         n=n/10;
         squareofN=squareofN/10;
     }

     if(flag)
     cout<<"automorphic number\n";
     else
     cout<<"not automorphic\n";


}