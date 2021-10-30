// C Program to Calculate the Power of a Number

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double n,p;
    int res=1;
    cin>>n>>p;

    while(p--)
    {
        res=res*n;
    }
    cout<<res;
}
