#include <iostream>
#include <cmath>
using namespace std;
int binaryToDecimal(int n)
{
    int r,sum=0;
    int i=0;
    while(n)
    {
        r=n%10;
        sum=sum+r*pow(2,i);
        n=n/10;
        i++;
    }
    return sum;
}
int main()
{   int n;
    cin>>n;

    cout<<binaryToDecimal(n);
}