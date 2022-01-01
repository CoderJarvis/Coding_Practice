// Print the sum of series n1/n + n2/(n-1)+...+nn/1 ^

#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int i, j;
    float sum = 0;
    for (i = 1, j = n; i <= n; i++, j--)
    {
        sum = sum + (float)pow(n, i) / j;
    }
    cout << sum;
}