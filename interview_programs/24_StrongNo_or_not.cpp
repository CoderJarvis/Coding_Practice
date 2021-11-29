// check strong number or not

#include <iostream>
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
    cin >> n;
    int temp = n;
    int r;
    int sum = 0;

    while (n != 0)
    {
        r = n % 10;
        sum = sum + fact(r);

        n = n / 10;
    }
    if (temp == sum)
    {
        cout << "its a strong number\n";
    }
    else
        cout << "not a strong number";
}