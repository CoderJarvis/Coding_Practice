// C Programs to showcase the conversion between various Number Systems

#include <iostream>
#include <cmath>
using namespace std;
int main()
{

     long bi;
     cin>>bi;

    int i=0,r;
    int dec=0;
     while( bi!=0)
     {  
         r=bi%10;
         dec=dec+r*(pow(2,i));
         i++;
         bi=bi/10;
     }

     cout<<dec;
     




}