// Basic C Program for Pointer to a Pointer

#include <iostream>
using namespace std;
int main()
{

     int val;
     cout << "enter the value\n";
     cin >> val;
     int *ptr;
     int **pptr;

     ptr = &val;
     pptr = &ptr;

     cout << "the value of val is :" << val << endl;
     cout << "the value of val is :" << *ptr << endl;
     cout << "the value of val is :" << **pptr << endl;
}