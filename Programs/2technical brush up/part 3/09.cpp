// Displaying the grade from the given marks Calculation is as per the following marks>=90 O,80-89 E, 70-79 A, 60-69 B, 50-59 C, 40-49 D,<40 F

#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    if (n >= 90)
        cout << "O";
    else if (n >= 80)
        cout << "E";
    else if (n >= 70)
        cout << "A";
    else if (n >= 60)
        cout << "B";
    else if (n >= 50)
        cout << "C";
    else if (n >= 40)
        cout << "D";
    else
        cout << "F";
}