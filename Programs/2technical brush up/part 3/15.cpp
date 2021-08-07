// Print the sum of series n1/2 + n2/2 +...+nn/2 ^

#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int n;
    cin >> n;
    float sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + (float)pow(n, i) / 2;
    }

    cout << sum;
}