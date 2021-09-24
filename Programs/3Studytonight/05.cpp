// Program to print the Largest and Smallest //%5d vs %05d

#include <iostream>
using namespace std;
int main()
{
     int n1,n2;
     scanf("%d%d",&n1,&n2);
     int c=n1>n2?n1:n2;
     printf("greater is %5d\n",c); //this will creat 5 spaces to fit the whole o/p
     printf("greater is %05d",c); //round of with 5 digits using 0 in the left

     // greater is    44
     // greater is 00044
}