// C Program to Add two user input numbers using Pointers

#include <iostream>
using namespace std;
int main()
{

    int n1, n2;
    cin >> n1 >> n2;

    int *ptr1, *ptr2;
    ptr1 = &n1;
    ptr2 = &n2;
    int c = *ptr1 + *ptr2;
    cout << c;
    
}