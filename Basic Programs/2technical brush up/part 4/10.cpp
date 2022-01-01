// Find whether a number is palindrome or not

#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int rev = 0, temp = n, r;
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;

        n = n / 10;
    }

    if (temp == rev)
        cout << "its a palindrome";
    else
        cout << "not a palindrome";
}