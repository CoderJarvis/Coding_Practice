// C Program to create a Menu Driven software using Switch Case

#include <iostream>
using namespace std;
int main()
{

    int choice;
    int num, fact = 1;

    while (1)
    {
        cout << "\nenter the number\n";
        cin >> num;
        cout << "1-factorial\n";
        cout << "2-even/odd\n";
        cout << "3-prime\n";
        cout << "4-exit\n";
        cout << "enter your choice\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            fact = 1;
            for (int i = 1; i <= num; i++)
            {
                fact = fact * i;
            }
            cout << "factorial = " << fact;
            break;

        case 2:
            if (num % 2 == 0)
                cout << "its a even\n";
            else
                cout << "its a odd\n";
            break;

        case 3:
            int i;
            for (int i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    cout << "it is not prime\n";
                    break;
                }
            }
            if (i == num)
                cout << "its a prime\n";
            break;

        case 4:
            exit(0);

        default:
            cout << "wrong case choosen";
        }
    }
}