#include <iostream>
using namespace std;
int main()
{

    cout << "how many number u want to inter\n";
    int n;
    cin >> n;
    cout << "enter 1 element\n";
    int big, c;
    cin >> big;
    for (int i = 2; i <= n; i++)
    {   
        cout << "enter "<<i<<" element\n";
        cin >> c;
        if (c > big)
            big = c;
    }

    cout<<big;
}