// Find the sum of digits of a given number n

#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int r;
    int sum = 0;
    while (n != 0)
    {
        r = n % 10;
        sum = sum + r;

        n = n / 10;
    }

    cout << sum;
}