#include <iostream>
using namespace std;
int main()
{

    char c;
    cout<<"enter a character\n";
    cin >> c;
    if (c >= 65 && c <= 90)
        cout << "its an Upper character\n";
    else if (c >= 97 && c <= 122)
        cout << "its a lower case\n";
    else if (c >= 48 && c <= 57)
        cout << "its a number\n";
    else if (c >= 33)
        cout << "its a special character";
}