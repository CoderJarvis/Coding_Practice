#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cin>>a;
    cin>>c;
    cin>>b;
    switch(c)
    {
        case '+':
        cout<<"addition is : "<<a+b;
        break;
        case '-':
        cout<<"substraction  is : "<<a-b;
        break;
        case '*':
        cout<<"multiplication result is : "<<a*b;
        break;
        case '/':
        cout<<"devision result is : "<<(float)a/b;
        break;
    }
}