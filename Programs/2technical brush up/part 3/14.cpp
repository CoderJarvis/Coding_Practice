// Print the factorial n! ie. 1*2* ... *n for a given number n

#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << fact;
}