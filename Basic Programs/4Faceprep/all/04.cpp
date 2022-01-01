// Check whether a given character is upper case, lower case, number or special character

#include <iostream>
using namespace std;
int main()
{

    char c;
    cout<<"enter a character\n";
    cin >> c;
    if (c >= 'A' && c <= 'Z')
        cout << "its an Upper character\n";
    else if (c >= 'a' && c <= 'z')
        cout << "its a lower case\n";
    else if (c >= '0' && c <= '9')
        cout << "its a number\n";
    else if (c >= 33)
        cout << "its a special character";
}