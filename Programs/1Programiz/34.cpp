// C Program to Find Factorial of a Number Using Recursion

#include <iostream>
using namespace std;
int fact(int n)
{
    if (n==1)
    {
        return n;
    }
    else
    {
        return n*fact(n-1);
    }
    
}
int main()
{

     int n;
     cin>>n;
     cout<<fact(n);




cout<<endl;
}