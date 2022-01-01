#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int r,rev=0;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if (rev==temp)
    {
        cout<<"it is a palindrome number"<<endl;
    }
    else
    cout<<"it is not a palindrome number";
    
}