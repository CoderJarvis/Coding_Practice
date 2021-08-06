// C program to find the second Largest number among Three user input Numbers

#include <iostream>
using namespace std;
int main()
{

     int n1,n2,n3;
     cin>>n1>>n2>>n3;

     int d=n1>=n2 && n1<=n3 || n1<=n2 && n1>=n3?n1:  n2>=n1 && n2<=n3 || n2<=n1 && n2>=n3 ? n2:n3;
     cout<<d;




}