// C Program to Reverse a Number

#include <iostream>
using namespace std;
int main()
{
    int n;
     cin>>n;
     int rev=0;
    int temp=n;
    while (n!=0)
    {
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    cout<<rev;



cout<<endl;
}