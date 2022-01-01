#include <iostream>
using namespace std;
int main()
{
    int base,exponent;
    cin>>base>>exponent;
    int result=1;
    while(exponent--)
    {
        result=result*base;
    }
    cout<<result;
}