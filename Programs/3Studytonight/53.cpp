// C program to Check for a Perfect Square

#include <iostream>
#include <cmath>

using namespace std;
int main()
{

     int a;
     cin>>a;
     int b=sqrt(a);

     if(b*b==a)
     cout<<"its a perfect square";
     else
     cout<<"not a pefect square";




}