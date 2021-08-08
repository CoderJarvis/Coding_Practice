// C Program to Check Whether a Number is Palindrome or Not

#include <iostream>
using namespace std;
int main()
{
    int n;
     cin>>n;
     int temp=n;
     int rev=0;
     while (n!=0)
     {
         int r=n%10;
         rev=rev*10+r;
         n=n/10;
     }

     if(temp==rev)
     cout<<"palindrom\n";
     else
     cout<<"not\n";
     

cout<<endl;
}