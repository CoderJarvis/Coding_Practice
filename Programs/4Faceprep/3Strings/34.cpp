// Check whether a string is PALINDROME or Not

#include <iostream>
using namespace std;
int main()
{
     string st1="madam";
     int i,j;
     int flag=1;
     for(int i=0,j=st1.length()-1;i<j;i++,j--)

     {
         if(st1[i]!=st1[j])
         {
             flag=0;
             break;
         }
     }
   
    if(flag)
    cout<<"palindrome";
    else
    cout<<"not";

}