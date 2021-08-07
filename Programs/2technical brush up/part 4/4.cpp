// Find LCM of two given numbers

#include <iostream>
using namespace std;
int main()
{

    int n1, n2;
    cin >> n1 >> n2;
    int lcm;
    int greater = n1 > n2 ? n1 : n2;
    for (int i = greater; i <= n1 * n2; i++)

    {
        if (i % n1 == 0 && i % n2 == 0)
        {
            lcm = i;
            break;
        }
    }

    cout << lcm;
}