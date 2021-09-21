// C Program to Find Factorial of a Number

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fact=1;

    while(n)
    {
        fact=fact*n;
        n--;
    }
    cout<<fact;
}
