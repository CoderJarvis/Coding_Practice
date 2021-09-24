// Program to find exponential without using pow() method

#include <iostream>
using namespace std;
int main()
{
     int n,e;
     cin>>n>>e;
     int mul=1;

     while(e--)
    {
        mul=mul*n;
    }
    cout<<mul;
}