// Program to find the Largest number among n input Numbers.

#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    cout << "how many number u want to enter\n";
    int n;
    cin >> n;
    int num;
    int max=INT_MIN;

    while(n--)
    {
        cin>>num;
        if(num>max)
        max=num;     
    }
    cout<<"biggest number is "<<max;
}
