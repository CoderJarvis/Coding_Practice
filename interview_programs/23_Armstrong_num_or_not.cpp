// Find whether n is Amstrong number or not ie. sum of cubes of digits = number

#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int temp = n;
    int r, sum = 0;
    while (n != 0)
    {
        r = n % 10;
        sum = sum + r * r * r;

        n = n / 10;
    }

    if (sum == temp)
        cout << "its an armstrong number\n";
    else
        cout << "not an armstrong number\n";
}