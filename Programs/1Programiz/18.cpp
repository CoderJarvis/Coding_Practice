// C Program to Count Number of Digits in an Integer

#include <iostream>
using namespace std;
int main()
{

     int n;
     cin>>n;
     int c=0;
     while (n!=0)
     {
        
         n=n/10;
         c++;
     }
    cout<<c;
     

}