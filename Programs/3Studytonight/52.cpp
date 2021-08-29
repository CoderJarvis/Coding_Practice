// C Program to Find Roots of Quadratic Equation

#include <iostream>
#include <cmath>

using namespace std;
int main()
{

     float a,b,c;
     float determinant=b*b-4*a*c;
     float r1,r2;
     float real,img;

     if(determinant>0)
     {
         r1=(-b+sqrt(determinant))/2*a;
         r1=(-b-sqrt(determinant))/2*a;
     }

     else if(determinant==0)
     {
         r1=r2=-b/(2*a);
     }

     else
     {
         real=-b/(2*a);
         img=sqrt(-determinant)/(2*a);
     }


}