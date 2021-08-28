// Program to find the Largest number among n input Numbers

#include <iostream>
#include <limits.h>
using namespace std;
int main()
{

    cout << "how many number u want to enter\n";
    int n;
    cin >> n;
    // cout << "enter 1 element\n";
    // int big, c;
    // cin >> big;
    // for (int i = 2; i <= n; i++)
    // {   
    //     cout << "enter "<<i<<" element\n";
    //     cin >> c;
    //     if (c > big)
    //         big = c;
    // }

    // cout<<big;
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