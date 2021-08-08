#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the number of series\n";
    cin >> n;

    int a = 0;
    int b = 1;
    int c;
    int i = 3;

    if (n == 1)
        cout << a;

    else if (n >= 2)
        cout << a << " " << b << " ";

    while (i <= n)
    {
        c = a + b;
        cout << c << " ";

        a = b;
        b = c;
        i++;
    }
}