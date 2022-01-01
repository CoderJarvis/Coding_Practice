// C Program to create a File & write Data in it

#include <iostream>
using namespace std;
int main()
{

    FILE *ptr;
    ptr = fopen("sample.txt", "w");

    int age;
    char name[20];
    cout << "enter name\n";
    gets(name);
    cout << "enter age\n";
    cin >> age;

    fprintf(ptr, "your name is %s and your age is %d", name, age);
}