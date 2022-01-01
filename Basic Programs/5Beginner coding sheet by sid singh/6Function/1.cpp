#include <iostream>
using namespace std;
int isPrime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        return 0;

    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= n; j++)
        {
            if (isPrime(i) && isPrime(j))
            {
                if(i+j==n && (i<=j))
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}