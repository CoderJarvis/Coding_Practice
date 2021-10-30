// Print the sum of series n1/n! + n2/(n-1)! + ... + nn/1!

#include <iostream>
#include <cmath>
using namespace std;
int fact(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    float sum = 0;
    ;
    cin >> n;
    int i, j;
    for (i = 1, j = 0; i <= n; i++, j++)
    { 
        sum = sum + (float)pow(n, i) / fact(n - j);
    }
    cout << sum;

    // int n,i,j,k,fact;
    // float sum=0;
    // cin>>n;
    // for(i=1,j=n;i<=n;i++,j--)
    // {
    //     fact=1;
    //     for(k=1;k<=j;k++)
    //     fact=fact*k;
    //     sum=sum+(float)pow(n,i)/fact;
    // }

    // cout<<sum;
}