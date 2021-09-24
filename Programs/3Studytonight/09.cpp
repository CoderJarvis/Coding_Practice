//Program to print the Fibonacci Series
#include <iostream>
using namespace std;

void fibonacci(int term)
{
    int n1=0;
    int n2=1;
    int n3=n1+n2;
    int i=3;

    if(term==1)
    cout<<n1;
    else
    cout<<n1<<" "<<n2<<" ";

    while(i<=term)
    {
        cout<<n3<<" ";

        n1=n2;
        n2=n3;
        n3=n1+n2;
        i++;
    }
}
int main()
{
    int term;
    cout<<"enter the number of terms\n";
    cin>>term;
    fibonacci(term);
}
    








