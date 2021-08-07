// Printing whether an inputted character is vowel or consonant

#include <iostream>
using namespace std;
int main()
{

    char c;
    cin >> c;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        cout << "its a vowel";
    }
    else
        cout << "its a consonent";
}