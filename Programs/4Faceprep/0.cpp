#include <iostream>
using namespace std;
int main()
{
    cout << "no of ingreents\n";
    int ingrent;
    cin >> ingrent;

    int sugar, flour, dryfruit, applePower;
    cin >> sugar >> flour >> dryfruit >> applePower;

    int maxSugar, maxflour, maxDryfruit, maxApplePower;
    cin >> maxSugar >> maxflour >> maxDryfruit >> maxApplePower;

    int d1,d2, d3, d4;
    d1=maxSugar/sugar;
    d2=maxflour/flour;
    d3=maxDryfruit/dryfruit;
    d4=maxApplePower/applePower;

    int min=d1<d2 && d1<d3&& d1<d4?d1:d2<d3&&d2<d4?d2:d3<d4?d3:d4;
    int hcf;

    cout<<min;
}
