// Finding area of a circle given integer radius and using pi as 22/7 instead of 3.142

#include <iostream>
using namespace std;
int main()
{

     int r;
     float a;
     cin >> r;
     a = (float)22 / 7 * r * r;
     cout << a;
}