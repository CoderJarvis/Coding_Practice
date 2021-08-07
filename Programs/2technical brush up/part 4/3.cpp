// Find HCF /GCD of two given numbers

#include <iostream>
using namespace std;
int main()
{

    int n1, n2;
    cin >> n1 >> n2;

    int lowest = n1 > n2 ? n2 : n1;
    int hcf;
    for (int i = 1; i <= lowest; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }

    cout << hcf;
}