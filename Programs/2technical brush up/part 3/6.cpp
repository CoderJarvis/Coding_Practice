// Finding an inputted number is divisible by 3 and 5 both or not

#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a % 3 == 0 && a % 5 == 0)
    {
        cout << "divisibl eby both";
    }
    else
    {
        cout << "not divisible by both";
    }
}